


function spiralOrder(matrix) {
  let ans = new Array();
  if (matrix.length == 0) return ans;
  
  let r1 = 0, r2 = matrix.length - 1;
  let c1 = 0, c2 = matrix[0].length - 1;
  
  while (r1 <= r2 && c1 <= c2) {
        for (let c = c1; c <= c2; c++)
          ans.push(matrix[r1][c]);
        for (let r = r1 + 1; r <= r2; r++)
          ans.push(matrix[r][c2]);
        if (r1 < r2 && c1 < c2) {
          for (let c = c2 - 1; c > c1; c--)
            ans.push(matrix[r2][c]);
          for (let r = r2; r > r1; r--)
            ans.push(matrix[r][c1]);
      }
      r1++; r2--; c1++; c2--;
  }
  return ans;
}

let matrix = [[1, 1, 1, 1, 1, 1, 1],
            [1, 2, 2, 2, 2, 2, 1],
            [1, 2, 3, 3, 3, 2, 1],
            [1, 2, 2, 2, 2, 2, 1],
            [1, 1, 1, 1, 1, 1, 1]];

let matrix2 = [
[ 1, 2, 3 ],
[ 4, 5, 6 ],
[ 7, 8, 9 ]];

// console.log(spiralOrder(matrix));
console.log(spiralOrder(matrix2));

