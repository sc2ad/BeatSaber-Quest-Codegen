import {
    BlobReader,
    ZipReader,
    Entry,
} from "https://deno.land/x/zipjs@v2.7.29/index.js";
import * as semver from "https://deno.land/std@0.202.0/semver/mod.ts";
import * as fs from "https://deno.land/std@0.202.0/fs/mod.ts";

import { sanitize_version } from "./versionhelpers.ts";
import { setOutput } from "./actionshelpers.ts";

const PACKAGE = Deno.env.get('PACKAGE');
const OCULUS_TOKEN = Deno.env.get('OCULUS_TOKEN');
const VERSION = semver.parse(Deno.env.get('VERSION'));

// get the package info for our specific package
const packageinfo = await fetch(`https://oculusdb.rui2015.me/api/v1/packagename/${PACKAGE}`).then(response => { return response.json(); });

// we only really care about the app id, you could remove a request by just putting the appid in here
const appid = packageinfo["id"];

// get all downloadable versions for this package
const packageversions = await fetch(`https://oculusdb.rui2015.me/api/v1/versions/${appid}?onlydownloadable=true`).then(response => { return response.json(); });

const correct = packageversions.find(packagever => semver.compare(semver.parse(sanitize_version(packagever.version)), VERSION) == 0);

if (correct === null) {
    await setOutput('found', 'false');
} else {
    await setOutput('found', 'true');
}

const binaryId = correct["id"];

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
    libil2cppEntry?.getData(il2cpp_file.writable),
    setOutput('libil2cpp-path', "output/libil2cpp.so"),
    setOutput('metadata-path', "output/global-metadata.dat")
]);
