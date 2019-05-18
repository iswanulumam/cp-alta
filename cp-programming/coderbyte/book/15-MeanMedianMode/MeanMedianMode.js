
// @problem: mean median mode

function MeanMedianMode(arr) {
  // getting mean value
  let mean = arr.reduce((prev, cur) => prev + cur) / arr.length;

  // getting median value
  arr = arr.sort();
  let median = arr[Math.floor(arr.length / 2)];

  let mode = undefined;
  let hashTable = {};
  for (let i of arr) {
    hashTable[i] === undefined ? hashTable[i] = 1 : hashTable[i] += 1;
    if (mode === undefined || hashTable[i] > mode) {
      mode = i;
    }
  }

  return { 'mean': mean, 'median': median, 'mode': mode };
}

console.log(MeanMedianMode([5, 1, 2, 3, 4])) // mean: 3, median: 3, mode: 1
