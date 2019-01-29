// Competencies: Functions + Loopings
/*
==============
Three Cols Box
==============
Instruksi
=========
Buatlah sebuah function bernama drawSymbolicColsBox yang menjalankan proses dengan menggunakan looping
(boleh dengan while atau for) dan menerima satu parameter bernama height.
Buatlah sebuah pola pemunculan simbol @, $, dan * di log (dengan console.log()),
dimana @ mewakili kelipatan ganjil, $ kelipatan genap, dan * khusus angka kelipatan 3. berurut sebagai berikut:

contoh 1 (drawThreeColsBox(3)):
@ $ *
$ @ *
@ $ *

contoh 2 (drawThreeColsBox(5)):
@ $ * $ @
* @ $ * $
@ * @ $ *
$ @ * @ $
* $ @ * @

contoh 3 (drawThreeColsBox(1)):
@

Note: pola symbol harus dimulai dari 1, dan setiap symbol diberikan spasi.
tinggi kotak sesuai dengan nilai variable height!
*/

// SKELETON CODE (Code Sample)

function drawSymbolicColsBox(num) {
  let count = 1;
  for (let i = 1; i <= num; i++) {
    let result = '';
    for (let i = 1; i <= num; i++) {
      if (count % 3 == 0) {
        result += '* ';
      } else if (count % 2 === 0) {
        result += '$ ';
      } else if (count % 2 !== 0) {
        result += '@ ';
      }
      count++;
    }
    console.log(result);
  }
}

drawSymbolicColsBox(3);
console.log();
drawSymbolicColsBox(5);
console.log();
drawSymbolicColsBox(1);
