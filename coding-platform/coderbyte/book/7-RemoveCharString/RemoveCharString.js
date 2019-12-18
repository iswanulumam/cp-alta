
function removeChars(arr, string) {
    let result = '';
    let hashTable = {};
    for(let i of arr) {
        hashTable[i] = true;
    }
    for (let i of string) {
        if (hashTable[i] === undefined) {
            result += i;
        }
    }
    return result;
}

console.log(removeChars(['h', 'e', 'w', 'o'], "hello world")); // => "ll rld"