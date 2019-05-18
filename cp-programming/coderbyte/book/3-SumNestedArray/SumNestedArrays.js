
// @problem: sum all element of nested array

function sumNested(arr) {
    let result = 0;
    for (let i = 0; i < arr.length; i++) {
        if (typeof arr[i] !== 'number') {
            result += sumNested(arr[i]);
        } else {
            result += arr[i];
        }
    }
    return result;
}

console.log(sumNested([1, 1, 1, [3, 4, [8]], [5]])); // 23