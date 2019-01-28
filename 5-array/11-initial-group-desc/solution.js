/*
===========================
Initial Grouping Descending
==========================
[INSTRUCTION]
Disediakan sebuah function initialGroupingDescending yang bertugas untuk menerima sebuah parameter
berupa array satu dimensi berisikan nama-nama. Function initialGroupingDescending akan
mengelompokkan nama-nama tersebut berdasarkan huruf depannya dan huruf depan harus terurut dari paling besar/descending dan dipisahkan ke dalam
array dua dimensi.
[EXAMPLE]
Input: [‘Budi’, ‘Badu’, ‘Joni’, ‘Jono’]
Output:
[
[ ‘J’, ‘Joni’, ‘Jono’ ],
[ ‘B’, ‘Budi’, ‘Badu’ ]
]
Kamu tidak perlu peduli dengan urutan alphabet nama siapa yang keluar terlebih dahulu!
RULES:
- Dilarang menggunakan sintaks Set atau Regex
- Dilarang menggunakan built in function sort
*/


function initialGroupingDescending(studentsArr) {
  
  var sort = function (arr) {
    for (let i = 0; i < arr.length; i++) {
      for (let j = i + 1; j < arr.length; j++) {
        if (arr[j] > arr[i]) {
          let temp = arr[j];
          arr[j] = arr[i];
          arr[i] = temp;
        }
      }
    }
    return arr;
  }

  let sorted = sort(studentsArr);
  let result = [];
  
  let index = -1;
  let mark = '*';
  
  for (let i of sorted) {
    if (i[0] != mark) {
      mark = i[0];
      index++;
      result[index] = [];
      result[index].push(mark);
      result[index].push(i);
    } else {
      result[index].push(i);
    }
  }

  return result;
}

console.log(initialGroupingDescending(['Budi', 'Badu', 'Joni', 'Jono']));
/*
[
[ ‘J’, ‘Joni’, ‘Jono’ ],
[ ‘B’, ‘Budi’, ‘Badu’ ]
]
*/

console.log(initialGroupingDescending(['Mickey', 'Yusuf', 'Donald', 'Ali', 'Gong']));
/*
[
[ ‘Y’, ‘Yusuf’ ],
[ ‘M’, ‘Mickey’ ],
[ ‘G’, ‘Gong’ ],
[ ‘D’, ‘Donald’ ],
[ ‘A’, ‘Ali’ ]
]
*/

console.log(initialGroupingDescending(['Rock', 'Stone', 'Brick', 'Rocker', 'Sticker']));
/*
[
[ ‘S’, ‘Stone’, ‘Sticker’ ],
[ ‘R’, ‘Rock’, ‘Rocker’ ],
[ ‘B’, ‘Brick’ ]
]*/