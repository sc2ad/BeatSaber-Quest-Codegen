import { setOutput } from "./actionshelpers.ts";

const GIT_TAG = Deno.env.get("GIT_TAG");

const check_tag = new Deno.Command("git", { args: ["rev-parse", `refs/tags/${GIT_TAG}`, "--"]});
const proc = await check_tag.spawn();

const status = await proc.status;
if (status.code == 0) {
    setOutput('result', 'true');
} else {
    setOutput('result', 'false');
}
