
// @problem: check the number is prime or not

function isPrime(n) {
    if (n < 2) return false;
    for (let i = 2; i <= Math.ceil(Math.sqrt(n)); i++) {
        if (n % i === 0) return false;
    }
    return true;
}

console.log(isPrime(1)); // fasle
console.log(isPrime(2)); // false
console.log(isPrime(3)); // true
console.log(isPrime(4)); // false
console.log(isPrime(5)); // true
console.log(isPrime(6)); // false
console.log(isPrime(7)); // true
console.log(isPrime(8)); // false
console.log(isPrime(9)); // false
console.log(isPrime(10)); // false