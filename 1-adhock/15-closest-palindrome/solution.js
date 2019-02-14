
function nextPalindrome(num) {
  // func to check number is palindrome or not
  let palindrome = function(n) {
    return n == Number(n.toString().split('').reverse().join(''));
  }

  let isPalindrome = function (x) {
    let init = x;
    let rem, rev = 0;
    while (x != 0) {
        rem = x % 10;
        rev = (rev * 10) + rem;
        x = Math.floor(x / 10);
    }
    return (init === rev ? true : false);
  }

  if (palindrome(num + 1)) { // true false
    return num + 1;
  } else {
    return nextPalindrome(num + 1);
  }
}

// TEST CASES
console.log(nextPalindrome(8)); // 9
console.log(nextPalindrome(10)); // 11
console.log(nextPalindrome(117)); // 121
console.log(nextPalindrome(175)); // 181
console.log(nextPalindrome(1000)); // 1001