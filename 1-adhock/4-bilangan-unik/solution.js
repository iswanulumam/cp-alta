'use strict'

function maxDivide(number, divisible) {
  while(number % divisible == 0) {
    number = number / divisible;
  }
  return number;
}

function isUgly(numberUgly) {
  numberUgly = maxDivide(numberUgly, 2);
  numberUgly = maxDivide(numberUgly, 3);
  numberUgly = maxDivide(numberUgly, 5);

  return (numberUgly == 1) ? true : false;
}

function getUglyNo(input) {
  let i = 1;
  let countUglyNumber = 1; // ugly number count

  while(input > countUglyNumber) {
    i++;
    if(isUgly(i) == 1) {
      countUglyNumber++;
    }
  }
  return i;
}

//driver code
console.log(getUglyNo(150)); //5832
console.log(getUglyNo(7)); //8
console.log(getUglyNo(10)); //12
console.log(getUglyNo(15)); //24

/*

Ugly numbers adalah angka yang jika dibagi dengan x(faktor prima) angka 2, 3 atau 5 menghasilkan angka 1.

Contoh 1:
4 merupakan ugly number karena
Proses:
  1. 4 dibagi 2 menghasilkan sisa bagi = 0 dan hasilnya adalah 2
     2 dibagi 2 menghasilkan sisa bagi = 0 dan hasilnya adalah 1

Maka 4 merupakan ugly number

contoh 2:
15 merupakan ugly number karena
Proses:
  1. 15 dibagi 2 menghasilkan sisa bagi > 0, maka akan melanjutkan ke step 2
  2. 15 dibagi 3 menghasilkan sisa bagi = 0 dan hasilnya adalah 5
     5 dibagi 3 menghasilkan sisa bagi > 0 maka akan melanjutkan ke step 3
  3. 5 dibagi 5 menghasilkan sisa bagi = 0 dan hasilnya adalah 1

Maka 15 merupakan ugly number

contoh 3:
17 bukan ugly number karena
Proses:
  1. 17 dibagi 2 menghasilkan sisa bagi > 0 maka akan melanjutkan ke step 2
  2. 17 dibagi 3 menghasilkan sisa bagi > 0 maka akan melanjutkan ke step 3
  3. 17 dibagi 5 menghasilkan sisa bagi > 0 dan hasilnya bukan 1

Maka 17 bukan ugly number

contoh 4:
20 merupakan ugly number karena
Proses:
  1. 20 dibagi 2 menghasilkan sisa bagi = 0 dan hasilnya adalah 10
     10 dibagi 2 menghasilkan sisa bagi = 0 dan hasilnya adalah 5
     5 dibagi 2 menghasilkan sisa bagi > 0 maka lanjut ke step 2
  2. 5 dibagi 3 menghasilkan sisa bagi > 0 maka akan melanjutkan ke step 3
  3. 5 dibagi 5 menghasilkan sisa bagi = 0 dan hasilnya adalah 1

Maka 20 merupakan ugly number

Buatlah sebuah function getUglyNumber dimana menerima sebuah parameter bertipe Number.
Function tersebut mengembalikan/me-return array kumpulan deret bilangan ugly number sampai angka parameter tersebut.

Contoh 1:
input: 10
output: [ 2, 3, 4, 5, 6, 8, 9, 10 ]

Contoh 2:
input: 20
output: [ 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 16, 18, 20 ]

RULE:
 - WAJIB MENGGUNAKAN ALGORITMA/PSEUDOCODE

FUNCTION isUglyNumber with Parameter (Num)
  IF Num equal with 1
    RETURN TO False
  ENF IF

  INIT Check[] Array Type with 2, 3, 5
  INIT Index with 0

  ITERATION While (Index to equal 3) {
    IF (Num % Check[index] === 0) {
      Num = Num / Check[index]
    ELSE
      Add Index with 1
    END IF
  END OF ITERATION
  
END FUNCTION

INIT Result []

FOR i = 1 until Length of Num
    IF (i) isUglyNumber ?
      ADD i to Result []
    END IF
END FOR

PRINT Result []

*/



function getUglyNumber(num) {

  var isUglyNumber = function(num) {
    if (num === 1) return false;

    let check = [2, 3, 5];
    let index = 0;
    
    while (index != 3) {
      if (num % check[index] === 0) {
        num = num / check[index];
      } else {
        index++;
      }
    }
    return num === 1 ? true : false;
  }

  let result = [];
  for (let i = 1; i <= num; i++) {
    if (isUglyNumber(i)) {
      result.push(i);
    }
  }
  return result;
}

console.log(getUglyNumber(10)); //[ 2, 3, 4, 5, 6, 8, 9, 10 ]
console.log(getUglyNumber(20)); //[ 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 16, 18, 20 ]
console.log(getUglyNumber(4)); //[ 2, 3, 4]
console.log(getUglyNumber(1)); //[]
