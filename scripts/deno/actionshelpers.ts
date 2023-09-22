// make sure to add --allow-env for this file!
export async function setOutput(name: string, value: string) {
    const GITHUB_OUTPUT = Deno.env.get(GITHUB_OUTPUT);
    await Deno.writeTextFile(GITHUB_OUTPUT, `${name}=${value}\n`, { append: true });
}
