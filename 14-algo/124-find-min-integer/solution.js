/*
- Find minimum integer positive
*/

function solution(A) {
  let map = {};
  for (let i of A) {
    if (map[i] === undefined) {
      map[i] = true;
    }
  }
  let index = 1, res;
  while (true) {
    if (map[index] === true) {
      index++;
    } else if (map[index] === undefined) {
      res = index;
      break;
    }
  }
  return index;
}

console.log(solution([1, 3, 6, 4, 1, 2]));
console.log(solution([1, 2, 3]));
console.log(solution([-1, -3]));
console.log(solution([-1, -3, -2, -3, 1, 100]));