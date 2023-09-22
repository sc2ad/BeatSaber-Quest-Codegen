import * as fs from "https://deno.land/std@0.202.0/fs/mod.ts";

const FORMAT_PATH = Deno.env.get("FORMAT_PATH");

for await (const entry of fs.walk(FORMAT_PATH)) {
    if (entry.isFile) {
        await Deno.writeTextFile("format.txt", `${entry.path}\n`, { append: true });
    }
}

const edit_version_cmd = new Deno.Command("clang-format", {args: ["-i", "--files", "format.txt"], stdout: "piped", stderr: "piped"});
await edit_version_cmd.spawn();
