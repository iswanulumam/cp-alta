
function isUglyNumber (num) {
  if (num === 1) return false;

  let check = [2, 3, 5];
  let index = 0;
  
  while (index != 3) {
    if (num % check[index] === 0) {
      num = num / check[index];
    } else {
      index++;
    }
  }
  return num === 1 ? true : false;
}

function getUglyNumber(num) {
  let result = [];
  for (let i = 1; i <= num; i++) {
    if (isUglyNumber(i)) {
      result.push(i);
    }
  }
  return result;
}

console.log(getUglyNumber(10)); // 2 3 4 5 6 8 9 10
console.log(getUglyNumber(20)); // 2 3 4 5 6 8 9 10 12 15 16 18 20
console.log(getUglyNumber(4));  // 2 3 4
console.log(getUglyNumber(1));  // 
