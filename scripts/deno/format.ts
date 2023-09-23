import { assert } from "https://deno.land/std@0.202.0/assert/assert.ts";
import * as fs from "https://deno.land/std@0.202.0/fs/mod.ts";

const FORMAT_PATH = Deno.env.get("FORMAT_PATH");

const files = [];
for await (const entry of fs.walk(FORMAT_PATH)) {
    if (entry.isFile) {
        files.push(entry.path);
    }
}

const fileCount = files.length;
const procCount = navigator.hardwareConcurrency;
const chunkSize = Math.ceil(fileCount / procCount);

assert(fileCount <= procCount * chunkSize);
console.log(`Formatting ${fileCount} files across ${procCount} processors, with chunks of size ${chunkSize}`);

const chunks = [];
for (let i = 0; i < procCount; i += chunkSize) {
    chunks.push(files.slice(i, i + chunkSize));
}

const format_processes = []
for (let i = 0; i < chunks.length; i++) {
    format_processes.push(format_chunk(`format-${i}.txt`, chunks[i]));
}

await Promise.all(format_processes);

async function format_chunk(formatfile: string, chunk: string[]) {
    for (const filepath of chunk) {
        await Deno.writeTextFile(formatfile, `${filepath}${fs.EOL}`, { append: true });
    }

    const edit_version_cmd = new Deno.Command("clang-format", {args: ["-i", "--files", formatfile], stdout: "piped", stderr: "piped"});
    await edit_version_cmd.spawn();
}
