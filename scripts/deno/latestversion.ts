import { setOutput } from "./actionshelpers.ts";
import { sanitize_version } from "./versionhelpers.ts";

const PACKAGE = Deno.env.get("PACKAGE");

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
        await setOutput('found', 'false');
    }
}

// we only really care about the app id, you could remove a request by just putting the appid in here
const appid = packageinfo["id"];

// get all downloadable versions for this package
const packageversions = await fetch(`https://oculusdb.rui2015.me/api/v1/versions/${appid}?onlydownloadable=true`).then(response => { return response.json(); });

// TODO: sort instead of assuming first is latest
const latest = packageversions[0];

await setOutput('version', sanitize_version(latest["version"]));
await setOutput('found', 'true');
