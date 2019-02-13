/*

@ Iswanul Umam - Red Fox
*/

function generateMark (row, col) {
  let result = [];
  let max = row * col;
  let counter = col * 2;
  for (let i = counter + 1; i < max; i += counter) {
    result.push(i);
  }
  return result;
}

function generateSnake(row, column) {
  if (row == 1 && column == 1) return 'o';
  if (row == 0 && column == 0) return 'row atau column minimal harus 1';

  let mark = generateMark(row, column);

  let allLine = ``;
  let maxItem = row * column;
  let counterItem = 1;

  for (let i = 0; i < row; i++) {
    let line = ``;
    let arrLine = [];

    for (let j = 0; j < column; j++) {
      if (counterItem == 1) {
        line += `~`;
        arrLine.push(`~`);
      } else if (counterItem == maxItem) {
        line += 'o';
        arrLine.push(`o`);
      }
      else if (
        (counterItem % column == 0) &&
        (i % 2 != 0)) {
        // console.log('counter', counterItem);
        line += '|';
        arrLine.push(`|`);
      }
      else if (mark.indexOf(counterItem) != -1) {
        line += '|';
        arrLine.push(`|`);
      }
      else {
        line += '_';
        arrLine.push(`_`);
      }

      counterItem++;
    }

    if ((i == row - 1) &&
        (row % 2 == 0)) {
        arrLine = arrLine.reverse();
    }
    // line +=  '|';
    allLine += `${arrLine.join('')}\n`;
  }

  return allLine;
}

console.log('Case 1:')
console.log(generateSnake(1,1));
// o

console.log('Case 2:')
console.log(generateSnake(0, 0));
// row atau column minimal harus 1


console.log('Case 3:')
console.log(generateSnake(6, 10));
/*
~_________
_________|
|_________
_________|
|_________
o________|
*/

console.log('Case 4:')
console.log(generateSnake(1,30));
/*
~____________________________o
*/

console.log('Case 5:')
console.log(generateSnake(3,20));
/*
~___________________
___________________|
|__________________o
*/