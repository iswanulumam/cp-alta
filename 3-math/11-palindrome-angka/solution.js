
function angkaPalindrome(num) {
  let result = num + 1;
  while (!isPalindromeNumber(result)) {
      result += 1;
  }
  return result;
}

function isPalindromeNumber (x) {
  let initNum = x;
  let remainder, reversedNumber = 0;
  while (x != 0) {
      remainder = x % 10;
      reversedNumber = (reversedNumber * 10) + remainder;
      x = Math.floor(x / 10);
  }
  return (initNum === reversedNumber ? true : false);
}

// TEST CASES
console.log(angkaPalindrome(8)); // 9
console.log(angkaPalindrome(10)); // 11
console.log(angkaPalindrome(117)); // 121
console.log(angkaPalindrome(175)); // 181
console.log(angkaPalindrome(1000)); // 1001