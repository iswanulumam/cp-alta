function isvalid (arr) {
  let valid = true;
  for (let row of arr) {
    let sorted = row.sort((a, b) => a - b).join('');
    if (sorted != '123456789') {
      valid = false;
    }
  }
  return valid;
}

function sudoku(rows){
  let columns = [], blocks = [];

  for (let i = 0; i < 9; i++) {
    columns[i] = [];  
    for (let j = 0; j < 9; j++) {
      let k = Math.floor(i / 3) + Math.floor(j / 3) * 3;
      blocks[k] = blocks[k] || [];
      
      blocks[k].push(rows[i][j]);
      columns[i].push(rows[j][i]);
    }
  }
  console.log('>>>>', blocks)

  let valid = isvalid(rows) && isvalid(columns) && isvalid(blocks);
  return valid ? `Hore, selesai :)` : `Coba lagi :(`;
}

let done = [ [ '1', '4', '5', '8', '9', '2', '6', '7', '3' ],
            [ '8', '9', '3', '1', '7', '6', '4', '2', '5' ],
            [ '2', '7', '6', '4', '3', '5', '8', '1', '9' ],
            [ '5', '1', '9', '2', '4', '7', '3', '8', '6' ],
            [ '7', '6', '2', '5', '8', '3', '1', '9', '4' ],
            [ '3', '8', '4', '9', '6', '1', '7', '5', '2' ],
            [ '9', '5', '7', '6', '1', '4', '2', '3', '8' ],
            [ '4', '3', '8', '7', '2', '9', '5', '6', '1' ],
            [ '6', '2', '1', '3', '5', '8', '9', '4', '7' ] ];

// console.log(sudoku(done));

console.log(sudoku([[5, 3, 4, 6, 7, 8, 9, 1, 2], 
                      [6, 7, 2, 1, 9, 5, 3, 4, 8],
                      [1, 9, 8, 3, 4, 2, 5, 6, 7],
                      [8, 5, 9, 7, 6, 1, 4, 2, 3],
                      [4, 2, 6, 8, 5, 3, 7, 9, 1],
                      [7, 1, 3, 9, 2, 4, 8, 5, 6],
                      [9, 6, 1, 5, 3, 7, 2, 8, 4],
                      [2, 8, 7, 4, 1, 9, 6, 3, 5],
                      [3, 4, 5, 2, 8, 6, 1, 7, 9]])); // "Hore, selesai :)"

// console.log(sudoku([[5, 3, 4, 6, 7, 8, 9, 1, 2], 
//                       [6, 7, 2, 1, 9, 0, 3, 4, 9],
//                       [1, 0, 0, 3, 4, 2, 5, 6, 0],
//                       [8, 5, 9, 7, 6, 1, 0, 2, 0],
//                       [4, 2, 6, 8, 5, 3, 7, 9, 1],
//                       [7, 1, 3, 9, 2, 4, 8, 5, 6],
//                       [9, 0, 1, 5, 3, 7, 2, 1, 4],
//                       [2, 8, 7, 4, 1, 9, 6, 3, 5],
//                       [3, 0, 0, 4, 8, 1, 1, 7, 9]])); // "Coba lagi :("