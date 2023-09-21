import * as semver from "https://deno.land/std@0.202.0/semver/mod.ts";

const qpm = await Deno.readTextFile("qpm.json").then(qpm => { return JSON.parse(qpm); })
const version = semver.parse(qpm.info.version);

// change version number to be minor +1
version.build = [];
version.prerelease = [];
version.patch = 0;
version.minor = 0;
version.major++;

const edit_version_cmd = new Deno.Command("qpm", {args: ["package", "edit", "--version", semver.format(version)], stdout: "piped", stderr: "piped"});
await edit_version_cmd.spawn();

const restore_cmd = new Deno.Command("qpm", {args: ["restore"], stdout: "piped", stderr: "piped"});
await restore_cmd.spawn();
