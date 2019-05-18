
// @problem: find first non repeating char

function firstNonRepChar(str) {
    let hashTable = {};
    for (let i of str) {
        if (i !== ' ') {
            if (hashTable[i] === undefined) {
                hashTable[i] = 1;
            } else {
                hashTable[i] += 1;
            }
        }
    }
    for (let c of str) {
        if (hashTable[c] === 1) {
            return c;
        }
    }
    return -1;
}

console.log(firstNonRepChar("hello henry")); // o
console.log(firstNonRepChar("hell henryo")); // n