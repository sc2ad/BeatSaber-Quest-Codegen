// version helper functions
function char(c: string) : number { return c.charCodeAt(0); }

function is_numeric(c: number) : boolean {
    const zero = char('0');
    const nine = char('9');
    return c >= zero && c <= nine;
}

export function sanitize_version(ver: string) : string {
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
