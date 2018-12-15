
// @ using two table

function twoSum(arr, v) {
  let map = {};
  for (let i = 0; i < arr.length; i++) {
    map[arr[i]] = i;
  }
  
  let result = [];
  for (let i = 0; i < arr.length; i++) {
    let complement = v - arr[i];
    if (map[complement] && map[complement] != i) {
      result.push(i, map[complement]);
    }
  }
  return [arr[result[0]], arr[result[1]]];
}

console.log(twoSum([2, 7, 11, 15], 9)); // [0, 1]
console.log(twoSum([10, 5, 2, 3, 7, 5], 10)); // [3, 7] **