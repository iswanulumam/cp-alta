/*
----------------------------------
Letter Remover Recursively
----------------------------------
PROBLEM
========
Tersedia 2 input: `sentence` dan `letter`

Nilai yang dikembalikan adalah nilai `sentence` dimana `letter` telah dihilangkan.

Gunakan rekursif untuk menyelesaikan soal ini.

Contoh
1) sentence = 'the quick brown fox', letter = 'o'    -->     the quick brwn fx
2) sentence = 'i love javascript', letter = 't' --> i love javascrip
3) sentence = 'hahahaha', letter = 'h' --> aaaa
RULES
=====
- Wajib menggunakan metode rekursif
- Dilarang menambahkan parameter baru
- Dilarang membuat variable di luar function letterRemoverRecursive
- Dilarang mengubah tipe data parameter
- Dilarang menggunakan looping (while, for, do-while, dan lain-lain)
*/

function letterRemoverRecursive(sentence, letter) {
  if (sentence.length == 0) {
    return '';
  } else if (sentence[0] == letter) {
    return letterRemoverRecursive(sentence.slice(1, sentence.length), letter);
  } else if (sentence[0] != letter) {
    return sentence[0] + letterRemoverRecursive(sentence.slice(1, sentence.length), letter);
  }
}

// console.log(letterRemoverRecursive('12104123', '1')); // 20423
// console.log(letterRemoverRecursive('the quick brown fox', 'o')); //  the quick brwn fx
// console.log(letterRemoverRecursive('hahaha', 'a')); // hhh

let counter = 0;

function findIndex(s, c) {
  counter++;
  if (counter == 20) return 0;


  if (true) {
    return 1 + findIndex(s.slice(1, s.length), c);
  }
}

console.log(findIndex('12104123', '3')); // 1
// console.log(findIndex('xoxx', 'o')); // 13
// console.log(findIndex('xoxxz', 'z')); // 5
// console.log(findIndex('hahaha', 'a')); // 2
// console.log(findIndex('hahaha', 'z')); // 2
