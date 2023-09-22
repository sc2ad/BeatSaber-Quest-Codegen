import { sanitize_version } from "./versionhelpers.ts";

const PACKAGE = Deno.env.get("PACKAGE");
const GITHUB_OUTPUT = Deno.env.get("GITHUB_OUTPUT");

// get the package info for our specific package
let packageinfo;
try {
    packageinfo = await fetch(`https://oculusdb.rui2015.me/api/v1/packagename/${PACKAGE}`)
    .then(response => {
        if (!response.ok) {
            throw new Error("Could not access package")
        }
        return response.json();
    });
} catch (error) {
    if (error instanceof Error) {
        await Deno.writeFile(GITHUB_OUTPUT, `found="false"\n`, { append: true });
    }
}

// we only really care about the app id, you could remove a request by just putting the appid in here
const appid = packageinfo["id"];

// get all downloadable versions for this package
const packageversions = await fetch(`https://oculusdb.rui2015.me/api/v1/versions/${appid}?onlydownloadable=true`).then(response => { return response.json(); });

// TODO: sort instead of assuming first is latest
const latest = packageversions[0];

await Deno.writeFile(GITHUB_OUTPUT, `version="${sanitize_version(latest["version"])}\n"`, { append: true });
await Deno.writeFile(GITHUB_OUTPUT, `found="true"\n`, { append: true });
