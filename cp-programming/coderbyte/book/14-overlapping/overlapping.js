
// @problem: overlapping

function overlapping(range1, range2) {
  let overlap = [];
  // check whether each number within range 1
  // is within the numbers in range 2
  for (let i = range1[0]; i <= range1[1]; i++) {
    if (i >= range2[0] && i <= range2[1]) {
      overlap.push(i);
    }
  }
  return overlap;
}

let range1 = [5, 20];
let range2 = [17, 21];

console.log(overlapping(range1, range2));