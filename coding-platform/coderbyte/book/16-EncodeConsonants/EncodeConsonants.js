
// @problem: encode consonants

function EncodeConsonants(string) {
    const vowels = ['a', 'i', 'u', 'e', 'o'];
    let result = '';
    for (let i of string) {
        // special condition
        if (i === 'z') {
            result += 'b';
            break;
        // hancle char non vowels
        } else if (vowels.indexOf(i) === -1 && i !== ' ') {
            let newCharCode = i.charCodeAt(0) + 1;
            // check the string is vowel or not
            if (vowels.indexOf(String.fromCharCode(newCharCode)) !== -1) {
                newCharCode += 1;
            }
            result += String.fromCharCode(newCharCode);
        // hancle char vowels
        } else {
            result += i;
        }
    }
    return result;
}

console.log(EncodeConsonants('hello world')); // jemmo xosmf