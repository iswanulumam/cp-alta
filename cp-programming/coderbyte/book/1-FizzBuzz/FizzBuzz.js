/*

Print out all the numbers from 1 to 100. But for every number divisible by 3 print replace it with the word “Fizz,”
for any number divisible by 5 replace it with the word “Buzz”
and for a number divisible by both 3 and 5 replace it with the word “FizzBuzz.”

1
2
Fizz
4
Buzz
Fizz
7
.
.
.
.
*/

// @problem: print 100 FizzBuzz

function fizzbuzz() {
    let result = [];
    for (let i = 1; i <= 50; i++) {
        let add = '';
        if (i % 3 === 0) {
            add += 'Fizz';
        }
        if (i % 5 === 0) {
            add += 'Buzz'
        }
        if (add === '') {
            result.push(i);
        } else {
            result.push(add);
        }
    }
    return result;
}

function fizzBuzz() {
    let result = [];
    for (let i = 1; i <= 100; i++) {
        if (i % 3 === 0 && i % 5 === 0) {
            result.push('FizzBuzz');
        } else if (i % 3 === 0) {
            result.push('Fizz');
        } else if (i % 5 === 0) {
            result.push('Buzz');
        } else {
            result.push(i);
        }
    }
    return result;
}

console.log(fizzbuzz());