
// @sudoku solver

let solveSudoku = function(board) {
  if (board == null || board.length == 0) return;
  solve(board);
};

let isValid = function (board, row, col, c) {
  for (let i = 0; i < 9; i++) {
    if (board[i][col] != '.' && board[i][col] == c) return false; // check row
    if (board[row][i] != '.' && board[row][i] == c) return false; // check column
    if (board[3 * (Math.floor(row / 3)) + Math.floor(i / 3)][ 3 * (Math.floor(col / 3)) + i % 3] != '.'
      && board[3 * (Math.floor(row / 3)) + Math.floor(i / 3)][3 * (Math.floor(col / 3)) + i % 3] == c) {
        return false; // check 3*3 block
    }
  }
  return true;
}

let solve = function (board) {
  for(let i = 0; i < board.length; i++) {
    for(let j = 0; j < board[0].length; j++) {
      if(board[i][j] == '.'){
          for(let c = '1'; c <= '9'; c++) { //trial. Try 1 through 9
            if(isValid(board, i, j, c)){
              board[i][j] = c.toString(); //Put c for this cell
              if(solve(board))
                return true; // If it's the solution return true
              else
                board[i][j] = '.'; // Otherwise go back
            }
          }
        return false;
      }
    }
  }
  return true;
}

let board = [['5', '3', '.', '.', '7', '.', '.', '.', '.'],
           ['6', '.', '.', '1', '9', '5', '.', '.', '.'],
           ['.', '9', '8', '.', '.', '.', '.', '6', '.'],
           ['8', '.', '.', '.', '6', '.', '.', '.', '3'],
           ['4', '.', '.', '8', '.', '3', '.', '.', '1'],
           ['7', '.', '.', '.', '2', '.', '.', '.', '6'],
           ['.', '6', '.', '.', '.', '.', '2', '8', '.'],
           ['.', '.', '.', '4', '1', '9', '.', '.', '5'],
           ['.', '.', '.', '.', '8', '.', '.', '7', '9']];



           
let hard = [
  ['8', '5', '.', '.', '.', '2', '4', '.', '.'],
  ['7', '2', '.', '.', '.', '.', '.', '.', '9'],
  ['.', '.', '4', '.', '.', '.', '.', '.', '.'],
  ['.', '.', '.', '1', '.', '7', '.', '.', '2'],
  ['3', '.', '5', '.', '.', '.', '9', '.', '.'],
  ['.', '4', '.', '.', '.', '.', '.', '.', '.'],
  ['.', '.', '.', '.', '8', '.', '.', '7', '.'],
  ['.', '1', '7', '.', '.', '.', '.', '.', '.'],
  ['.', '.', '.', '.', '3', '6', '.', '4', '.'],
];

solveSudoku(hard);
console.log(hard);