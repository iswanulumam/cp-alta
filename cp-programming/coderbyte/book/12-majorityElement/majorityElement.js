
// @ problem: find majority element

function majorityElement(arr) {
    let hash = {};
    for (let i of arr) {
        if (hash[i] === undefined) hash[i] = 1;
        else hash[i] = hash[i] + 1;
    }
    let result, max = 0;
    for (let prop in hash) {
        if (hash[prop] > max) {
            result = prop;
            max = hash[prop];
        }
    }
    let doubleMax  = 0;
    for (let prop in hash) {
        if (hash[prop] === max) doubleMax += 1;
    }
    return (doubleMax > 1 ? 'not found' : result);
}

console.log(majorityElement([1, 4, 5, 5, 5, 5]));           // 5
console.log(majorityElement([1, 4, 4, 5, 5]));              // not found
console.log(majorityElement([1, 4, 4, 5, 5, 6, 6, 6]));     // 6