import * as fs from "https://deno.land/std@0.194.0/fs/mod.ts";
import * as path from "https://deno.land/std@0.194.0/path/mod.ts";

const UNITY_VERSION = "UNITY_2021";
const archTarget = "aarch64";
const apiLevel = 24;
const codegenHeaders = path.join(Deno.cwd(), "include");
const externHeaders = path.join(Deno.cwd(), "extern/includes");
const il2cppHeaders = path.join(
  Deno.cwd(),
  "extern/includes/libil2cpp/il2cpp/libil2cpp"
);

let ndkPath: string | undefined;

if (await fs.exists("ndkpath.txt")) {
  ndkPath = await Deno.readTextFile("ndkpath.txt");
} else {
  ndkPath = Deno.env.get("ANDROID_NDK_HOME");
}

if (ndkPath === undefined) {
  throw "No NDK path found!";
}

const clangPath = path.join(
  ndkPath,
  "toolchains",
  "llvm",
  "prebuilt",
  `${Deno.build.os}-${Deno.build.arch}`,
  "bin",
  `clang++`
);

const sysroot = path.join(
  ndkPath,
  "toolchains",
  "llvm",
  "prebuilt",
  `${Deno.build.os}-${Deno.build.arch}`,
  "sysroot"
);

console.log("Using clang", clangPath);

async function gen2array<T>(gen: AsyncIterable<T>): Promise<T[]> {
  const out: T[] = [];
  for await (const x of gen) {
    out.push(x);
  }
  return out;
}
const directories = await gen2array(
  fs.walk(codegenHeaders, { includeFiles: false })
);

const sortedDirectories = directories.sort((a, b) =>
  (a.path + a.name).localeCompare(b.path + b.name)
);

console.log(
  "Compiling:\n",
  sortedDirectories.map((a) => path.join(a.path, a.name)).join("\n")
);

for (const dirEntry of sortedDirectories) {
  // Namespace/Namespace.hpp
  const namespaceHeader = path.join(dirEntry.path, `${dirEntry.name}.hpp`);

  if (!(await fs.exists(namespaceHeader))) {
    console.log("Skipping", dirEntry.name, " does not exist");
    continue;
  }

  const strippedPath = path.relative(Deno.cwd(), namespaceHeader);

  console.log(`Compiling PCH:`, strippedPath);
  await buildHeader(namespaceHeader);
}

async function buildHeader(headerPath: string) {
  const compileCommandsPath =
    path.join(Deno.cwd(), "build", path.basename(headerPath)) + ".json.tmp";

  // "clang -cc1 test.h -emit-pch -o test.h.pch"
  const args = [
    // "-cc1", // C
    "-c", // C++
    "-MJ",
    compileCommandsPath,
    `--sysroot=${sysroot}`,
    `--target=${archTarget}-linux-android${apiLevel}`,
    // clang build args
    "-stdlib=libc++",
    "-std=gnu++20",
    `-xc++-header`,
    `-I${codegenHeaders}`,
    `-I${externHeaders}`,
    `-isystem${il2cppHeaders}`,
    `-DNO_CODEGEN_USE`,
    `-DANDROID`,
    `-DNDEBUG`,
    `-D${UNITY_VERSION}`,
    `-O3`,
    `-fdeclspec`,

    // PCH
    headerPath,
    "-emit-pch",
    "-o",
    `${headerPath}.pch`,
  ];

  const command = new Deno.Command(clangPath, {
    args: args,
    stdout: "inherit",
    stderr: "inherit",
  });

  const output = await command.output();

  // fixupCompileCommands(compileCommandsPath);

  if (!output.success) {
    console.error(`Failed to compile ${headerPath}`);
    console.error(`Command invocation:\n${clangPath} ${args.join(" ")}`);
    console.error("======================");
    Deno.exit(1);
  }
}

async function fixupCompileCommands(path: string) {
  const tempFile = await Deno.readTextFile(path);
  const tempJson = JSON.parse(tempFile.trim());

  const filePath = "./build/compile_commands.json";

  // create file if needed
  await fs.ensureFile(filePath);

  const defaultFileContents: string = await Deno.readTextFile(filePath);

  let fileJson: unknown[];
  if (defaultFileContents.trim() === "") {
    fileJson = [];
  } else {
    fileJson = JSON.parse(defaultFileContents.trim());
  }

  const final = fileJson.concat(...tempJson);
  await Deno.writeTextFile(filePath, JSON.stringify(final));
}
