
// @problem: remove pairs

function removePairs(str) {
    let result = '';
    for (let i = 0; i < str.length; i++) {
        if (str[i] !== str[i+1]) {
            result += str[i];
        } else {
            i += 1;
        }
    }
    return result;
}

console.log(removePairs("aaagykkok")); // agyok