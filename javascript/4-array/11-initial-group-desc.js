
function sort (arr) {
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

function initialGroupingDescending(studentsArr) {
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