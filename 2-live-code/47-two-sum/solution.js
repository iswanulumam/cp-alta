
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


function twoSumKuadrat(nums, target) {
  let result = [];
  result.push(-1, -1);
  for (let i = nums.length - 1; i >= 0; i--) {
    for (let j = nums.length - 1; j >= 0; j--) {
      if (i !== j) {
        if (nums[i] + nums[j] === target) {
          result[0] = i;
          result[1] = j;
        }
      }
    }
  }
  return result;
};

function twoSumLinier(nums, target) {
let ans = [];
let mapper = {};
for (let i = 0; i < nums.length; i++) {
  if (typeof mapper[target - nums[i]] !== 'undefined') {
    // console.log('>', i, 'mapper:', mapper, target - nums[i], target, nums[i]);
    ans.push(mapper[target - nums[i]]);
    ans.push(i);
  }
  mapper[nums[i]] = i;
}
return ans;
}

console.log(twoSumLinier([2, 7, 11, 15], 9)); // [0, 1]