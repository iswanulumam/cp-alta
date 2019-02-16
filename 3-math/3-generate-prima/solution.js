
function isPrime (n) {
  if (n < 2) return false;
  let prime = true;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i == 0) {
      prime = false;
    }
  }
  return prime;
}

function getPrime(num) {
  let result = [];
  for (let i = 1; i <= num; i++) {
    if (isPrime(i)) {
      result.push(i);
    }
  }

  return result;
}

// Driver Code
console.log(getPrime(17)) // 2 3 5 7 11 13 17
console.log(getPrime(41)) // 2 3 5 7 11 13 17 19 23 29 31 37 41