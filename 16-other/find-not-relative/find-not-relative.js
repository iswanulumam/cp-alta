/*

==================================
Array Mastery: Find Not Relative
==================================

Diberikan sebuah function findNotRelative yang menerima 2 parameter berupa array of number.
Output adalah array berupa kumpulan angka yang ada di array pertama tetapi tidak ada di array kedua.

Contoh 1:
input: [ 3, 6, 10, 12, 15 ] dan [ 1, 3, 5, 10, 16 ]
output: [ 6, 12, 15]

Contoh 2:
input: [ 10, 20, 36, 59 ] dan [ 5, 10, 15, 59 ]
output: [20, 36]

RULES:
 - WAJIB MENGGUNAKAN ALGORITMA/PSEUDOCODE
 - DILARANG MENGGUNAKAN .map, .filter atau .reduce!

INT Tabel with Object

FOR i of Arr2
  ASSIGN Tabel[i] with value TRUE
END FOR

INIT Result[]

FOR i of arr1
  IF (Tabel[i] NOT EXIST)
    ADD i to Result[]
  END IF
END FOR

PRINT Result[]

*/

function findNotRelative_(arr1, arr2) {
  let tabel = {};
  for (let i of arr2) {
    tabel[i] = true;
  }
  
  let result = [];
  for (let i of arr1) {
    if (tabel[i] !== true) {
      result.push(i);
    }
  }
  return result;
}

function findNotRelative(arr1, arr2) {
  let result = [];
  
  for (let i of arr1) {
    let isExist = false;
    
    for (let j of arr2) {
      if (i == j) {
        isExist = true;
      }
    }
    if (!isExist) {
      result.push(i);
    }

  }
  
  return result;
}

console.log(findNotRelative([ 3, 6, 10, 12, 15 ], [ 1, 3, 5, 10, 16 ])); // [ 6, 12, 15]
console.log(findNotRelative([ 10, 20, 36, 59 ], [ 5, 10, 15, 59 ])); //[20, 36]
console.log(findNotRelative([ 1, 2, 3], [2, 1, 3])); //[]
