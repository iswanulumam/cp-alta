/*
=============
DUPLICATE FINDER
=============

*/

function uniqueFinder(sentence) {
  if (sentence.length == 0) {
    return 'NO WORDS';
  }

  var stringToArray = function (str) {
    let result = [];
    let res = '';
    for (let i of str) {
      if (i == ' ') {
        result.push(res);
        res = '';
      } else {
        res += i;
      }
    }
    result.push(res);
    return result;
  }

  let low = sentence.toLowerCase();
  let arr = stringToArray(low);

  let tabel = {};
  let result = [];
  
  for (let i of arr) {
    if (tabel[i] == undefined) {
      tabel[i] = 1;
    } else {
      tabel[i]++;
    }
  }

  for (let i in tabel) {
    if (tabel[i] > 1) {
      result.push(i);
    }
  }

  return result;
}

console.log(uniqueFinder('hello black dragon and hello red dragon')); // ['hello',' dragon']
console.log(uniqueFinder('hello HELLo hEllO hlloe')); // ['hello']
console.log(uniqueFinder('john is coding and he is coding')); // ['is', 'coding']
console.log(uniqueFinder('blue blue red blue violet red violet')); // ['blue', 'red', 'violet']
console.log(uniqueFinder('')); // 'NO WORDS'