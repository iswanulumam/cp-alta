/*
=============
UNIQUE FINDER
=============
Name :_____________
[INSTRUCTIONS]
uniqueFinder adalah sebuah function yang menerima satu parameter berupa kalimat.
Function akan mereturn array yang berisi setiap kata yang ditemukan dalam kalimat.
Tidak boleh ada kata yang berulang, dan besar kecil dari kata tidak dianggap.
Sehingga, Hello dan HELLO di anggap kata yang sama.
Function harus mereturn string "NO WORD" jika di kalimat tersebut tidak ditemukan kata apapun.

[EXAMPLE]
uniqueFinder('saya dan SAYA suka makan nasi')
kata unik: saya, dan, suka, makan, nasi
output: ['saya', 'dan', 'suka', 'makan', 'nasi']

DILARANG MENGGUNAKAN SPLIT, INDEXOF, INCLUDES
*/


// console.log(stringToArray('hello black dragon and hello red dragon'));

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
  let arr = stringToArray(low); // low.split()

  let tabel = {};
  let result = [];
  for (let i of arr) {
    if (tabel[i] == undefined) {
      tabel[i] = true;
      result.push(i);
    }
  }
  return result;
}

console.log(uniqueFinder('hello black dragon and hello red dragon')); // ['hello', 'black', 'dragon', 'and', 'red']
console.log(uniqueFinder('hello HELLo hEllO hlloe')); // ['hello', 'hlloe']
console.log(uniqueFinder('john is coding and he is coding')); // ['john', 'is', 'coding', 'and', 'he']
console.log(uniqueFinder('blue blue red blue violet red violet')); // ['blue', 'red', 'violet']
console.log(uniqueFinder('')); // 'NO WORDS'