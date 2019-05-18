
// @problem: mapping value of array

let square = (n) => n * n;
let addZero = (x) => parseInt(x += '00', 10);

function map(arr, func) {
    let result = [];
    for (let i of arr) {
        let app = func(i);
        result.push(app);
    }
    return result;
}

// @problem: filter value of array

let isPositive = (n) => n > 0;

function filter(arr, func) {
    let result = [];
    for (let i of arr) {
        let check = func(i);
        if (check) {
            result.push(i);
        }
    }
    return result;
}

console.log(map([1, 2, 3, 4, 5], square));      // [ 1, 4, 9, 16, 25 ]
console.log(map([1, 2, 3, 4, 5], addZero));     // [ 100, 200, 300, 400, 500 ]
console.log(filter([-1, 0, -2, 3, 4, 5, -9], isPositive));      // [ 3, 4, 5 ]
