/*

The two sum problem is a common interview question, and it is a variation of the subset sum problem.
There is a popular dynamic programming solution for the subset sum problem,
but for the two sum problem we can actually write an algorithm that runs in O(n) time.
The challenge is to find all the pairs of two integers in an unsorted array that sum up to a given S. 

For example, if the array is [3, 5, 2, -4, 8, 11] and the sum is 7, your program should return [[11, -4], [2, 5]]
because 11 + -4 = 7 and 2 + 5 = 7.

*/

function twoSumNaive(arr, S) {
    let resul = [];
    for (let i = 0; i < arr.length; i++) {
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[i] + arr[j] === S) {
                resul.push([arr[j], arr[i]]);
            }
        }
    }
    return resul;
}

function twoSum(arr, S) {
    let sum = [];
    let hashTable = {};

    for (let i = 0; i < arr.length; i++) {
        let sumMunusElement = S - arr[i];
        if (hashTable[sumMunusElement.toString()] !== undefined) {
            sum.push([arr[i], sumMunusElement]);
        }
        hashTable[arr[i].toString()] = arr[i];
    }
    return sum;
}

console.log(twoSumNaive([3, 5, 2, -4, 8, 11], 7)); // [ [ 2, 5 ], [ 11, -4 ] ]
console.log(twoSum([3, 5, 2, -4, 8, 11], 7)); // [ [ 2, 5 ], [ 11, -4 ] ]