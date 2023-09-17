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

for await (const dirEntry of fs.walk(codegenHeaders, { includeFiles: false })) {
  // Namespace/Namespace.hpp
  const namespaceHeader = path.join(dirEntry.path, `${dirEntry.name}.hpp`);

  if (!(await fs.exists(namespaceHeader))) {
    console.log("Skipping", dirEntry.name, " does not exist");
    continue;
  }

  console.log(`Compiling PCH:`, dirEntry.name);
  await buildHeader(namespaceHeader);
}

async function buildHeader(path: string) {
  // "clang -cc1 test.h -emit-pch -o test.h.pch"
  const args = [
    // "-cc1", // C
    "-c", // C++
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
    path,
    "-emit-pch",
    "-o",
    `${path}.pch`,
  ];

  const command = new Deno.Command(clangPath, {
    args: args,
    stdout: "inherit",
    stderr: "inherit",
  });

  const output = await command.output();

  if (!output.success) {
    console.error(`Failed to compile ${path}`);
    console.error(`Command invocation:\n${clangPath} ${args.join(" ")}`);
    console.error("======================");
    Deno.exit(1);
  }
}
