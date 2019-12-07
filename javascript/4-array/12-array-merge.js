
function arrayMerge (firstData, secondData) {
  let result = [];
  for (let i of firstData)
    result.push(i)
  for (let j of secondData)
    result.push(j);

  let map = {};
  let final = [];
  for (let i of result) {
    if (map[i] === undefined) {
      map[i] = i;
      final.push(map[i]);
    }
  }
  return final;
}

// Test cases
console.log(arrayMerge(['king', 'devil jin', 'akuma'], ['eddie', 'steve', 'geese']));
// ['king', 'devil jin', 'akuma', 'eddie', 'steve', 'geese']

console.log(arrayMerge(['sergei', 'jin'], ['jin', 'steve', 'bryan']));
// ['sergei', 'jin', 'steve', 'bryan']

console.log(arrayMerge(['alisa', 'yoshimitsu'], ['devil jin', 'yoshimitsu', 'alisa', 'law']));
// ['alisa', 'yoshimitsu', 'devil jin', 'law']

console.log(arrayMerge([], ['devil jin', 'sergei']));
// ['devil jin', 'sergei']

console.log(arrayMerge(['hwoarang'], []));
// ['hwoarang']

console.log(arrayMerge([], []));
// []