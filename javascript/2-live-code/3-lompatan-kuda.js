
let board = [
  ['-','-', '-', '-', '-', '-', '-', '-'],
  ['-','-', '-', '-', '-', '-', '-', '-'],
  ['-','-', '-', '-', '-', '-', '-', '-'],
  ['-','-', '-', '-', '-', '-', '-', '-'],
  ['-','-', '-', '-', '-', '-', '-', '-'],
  ['-','-', '-', '-', '-', '-', '-', '-'],
  ['-','-', '-', '-', '-', '-', '-', '-'],
  ['-','-', '-', '-', '-', '-', '-', '-']
  ];

let table = {
  'A': 0,
  'B': 1,
  'C': 2,
  'D': 3,
  'E': 4,
  'F': 5,
  'G': 6,
  'H': 7,
};

function placeAvailable(board, xPos, yPos) {
  try {
    if (board[xPos][yPos] != undefined) return true;
  } catch(e) {
    return false;
  }
}

function lompatanKuda(pos) {
  let xPos = table[pos[0]];
  let yPos = Number(pos[1] - 1);
  let counter = 0;

  if (placeAvailable(board, xPos - 1, yPos - 1)) counter++;
  if (placeAvailable(board, xPos - 1, yPos - 2)) counter++;
  if (placeAvailable(board, xPos - 2, yPos + 1)) counter++;
  if (placeAvailable(board, xPos - 1, yPos + 2)) counter++;
  if (placeAvailable(board, xPos + 1, yPos + 2)) counter++;
  if (placeAvailable(board, xPos + 2, yPos + 1)) counter++;
  if (placeAvailable(board, xPos + 1, yPos - 1)) counter++;
  if (placeAvailable(board, xPos + 2, yPos - 1)) counter++;
  
  return counter;
}

console.log(lompatanKuda('A1')); // 2
console.log(lompatanKuda('G7')); // 4
console.log(lompatanKuda('C4')); // 8
