/**
Even Pairs Sum
--------------
Implementasikan function `evenPairsSum` yang akan menjumlahkan pasangan-pasangan angka genap yang
ada di dalam `str`.
Contoh
- input: '34102180'
  pasangan: 34, 10, 21, 80
  output: 124
  Karena ada pasangan genap (34, 10, 80) maka akan dijumlahkan
- input: '31913791'
  pasangan: 31, 91, 37, 91
  output: 0
  Karena tidak ada pasangan genap
- input: '2130113'
  pasangan: 21, 30, 11, 32
  output: 62

NOTE: Jika angka terakhir tidak memiliki pasangan, maka pasangkan dengan angka pertama seperti
      pada contoh terakhir

Aturan coding
-------------
- WAJIB MENYERTAKAN ALGORITMA/PSEUDOCODE


INIT Sum with 0

FOR i in Str with counter 2

  INIT Num with Str[i]
  
  IF Srt[i] equal undefined
    Num += Str[0]
  ELSE
    NUM += Str[i + 1]
  END IF

  IF Num % 2 equal 0 
    Sum += Num;
  END IF
END FOR

PRINT Sum

*/

function evenPairsSum (str) {
  let sum = 0;
  for (let i = 0; i < str.length; i += 2) {
    let num = `${str[i]}`;
    if (str[i+1] === undefined) {
      num += `${str[0]}`
    } else {
      num += `${str[i+1]}`;
    }
    if (Number(num) % 2 === 0) {
      sum += Number(num);
    }
  }
  return sum;
}

console.log(evenPairsSum('2044101211')); // 86
console.log(evenPairsSum('33791363')); // 0
console.log(evenPairsSum('23426766201')); // 140
console.log(evenPairsSum('2478201')); // 134
