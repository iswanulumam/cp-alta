
function missingNumbers (numbers) {
  let max = findMax(numbers);
  let min = findMin(numbers);
  let tabel = {};
  for (let i of numbers) {
    if (tabel[i] == undefined) {
      tabel[i] = true;
    }
  }
  let ans = [];
  for (let i = min; i <= max; i++) {
    if (!tabel[i]) {
      ans.push(i);
    }
  }
  return ans;
}

function findMax (arr) {
  let max = -Infinity;
  for (let i of arr) {
    if (i > max) {
      max = i;
    }
  }
  return max;
}

function findMin (arr) {
  let min = Infinity;
  for (let i of arr) {
    if (i < min) {
      min = i;
    }
  }
  return min;
} 

console.log(missingNumbers([1, 5, 10, 7, 6])); // [2, 3, 4, 8, 9]
console.log(missingNumbers([10, 1])); // [2, 3, 4, 5, 6, 7, 8, 9]
console.log(missingNumbers([90, 92, 91])); // []
console.log(missingNumbers([60, 54, 50])); // [51, 52, 53, 55, 56, 57, 58, 59]
console.log(missingNumbers([])); // []
