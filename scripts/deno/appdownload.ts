// @deno-types="https://deno.land/x/zipjs@v2.7.29/index.d.ts"
import {
    BlobReader,
    ZipReader,
    Entry,
} from "https://deno.land/x/zipjs@v2.7.29/index.js";
import * as semver from "https://deno.land/std@0.202.0/semver/mod.ts";
import * as fs from "https://deno.land/std@0.202.0/fs/mod.ts";

// Which package to get
const PACKAGE = "com.beatgames.beatsaber";

// Token file, only get the data up until the first newline if there is a newline at all
const OCULUS_TOKEN = Deno.env.get("OCULUS_TOKEN");
if (OCULUS_TOKEN === undefined) {
    console.error("Oculus token was undefined")
    Deno.exit(1);
}

// get the package info for our specific package
const packageinfo = await fetch(`https://oculusdb.rui2015.me/api/v1/packagename/${PACKAGE}`).then(response => { return response.json(); });

// we only really care about the app id, you could remove a request by just putting the appid in here
const appid = packageinfo["id"];

// get all downloadable versions for this package
const packageversions = await fetch(`https://oculusdb.rui2015.me/api/v1/versions/${appid}?onlydownloadable=true`).then(response => { return response.json(); });

// get the newest
// TODO: sort versions instead of assuming input is sorted
const latest = packageversions[0];

// binary Id for latest version
const binaryId = latest["id"];
console.log(`Getting binary: ${binaryId}`)

// get the old and new versions to compare
const old_version_text = await Deno.readTextFile("./lastversion.txt");
const old_version = semver.parse(sanitize_version(old_version_text));
const new_version = semver.parse(sanitize_version(latest["version"]));

console.log(`Old version: ${semver.format(old_version)}`)
console.log(`New version: ${semver.format(new_version)}`)

// if the old version is greater than or equal to the new version, early exit
if (semver.gte(old_version, new_version)) {
    console.log("The old version was greater than or equal to the latest version, not downloading the app")
    Deno.exit(0)
}

// download the app
const binary_url = `https://securecdn.oculus.com/binaries/download/?id=${binaryId}&access_token=${OCULUS_TOKEN}`;
let blob: Blob;
try {
    blob = await fetch(binary_url)
    .then(response => {
        if (!response.ok) {
            throw new Error(response.statusText)
        }

        return response.blob();
    });
} catch(e) {
    // if we error out, just exit with unsuccessful return
    console.log(e);
    Deno.exit(1);
}

// get the metadata and libil2cpp files from the apk
const blobReader = new BlobReader(blob);
const apk = new ZipReader(blobReader);

if (fs.existsSync("output")) {
    await Deno.remove("output", { recursive: true });
}
await Deno.mkdir("output", { recursive: true });
const il2cpp_file = await Deno.open("output/libil2cpp.so", { write: true, createNew: true });
const metadata_file = await Deno.open("output/global-metadata.dat", { write: true, createNew: true });

const appEntries = await apk.getEntries();

const metadataEntry = appEntries.find((x: Entry) => { return x.filename == "assets/bin/Data/Managed/Metadata/global-metadata.dat"; });
const libil2cppEntry = appEntries.find((x: Entry) => { return x.filename == "lib/arm64-v8a/libil2cpp.so"; });

await Promise.all([
    metadataEntry?.getData(metadata_file.writable),
    libil2cppEntry?.getData(il2cpp_file.writable)
]);

// we haven't errored, write out the new version into the text file
await Deno.writeTextFile("lastversion.txt", semver.format(new_version))

// version helper functions
function char(c: string) : number { return c.charCodeAt(0); }

function is_numeric(c: number) : boolean {
    const zero = char('0');
    const nine = char('9');
    return c >= zero && c <= nine;
}

function sanitize_version(ver: string) : string {
    // first find the second occurence of '.'
    let occurence = 0;
    for (let i = 0; i < ver.length; i++) {
        const c = ver.charCodeAt(i);

        // windows newline endings moment
        const resetline = char('\r');
        const newline = char('\n');
        if (c == resetline) break;
        if (c == newline) break;

        if (occurence == 2) {
            // find the first non-numeric idx after the second '.'
            if (!is_numeric(c)) {
                const dash = char('-');
                const underscore = char('_');

                // if the first non numeric is not -, change it
                if (c != dash) {
                    if (c == underscore) { // if it's a _, change it into a -
                        return ver.slice(0, i) + "-" + ver.slice(i + 1);
                    } else { // if it's not a _, insert a -
                        return ver.slice(0, i) + "-" + ver.slice(i);
                    }
                } else {
                    break;
                }
            }
        }

        const period = char('.');
        if (c == period) occurence++;
    }

    return ver;
}
