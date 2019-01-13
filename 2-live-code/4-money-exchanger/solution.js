/*

Money Exchanger
⏰ Time Estimation: ~20 mins

buatlah sebuah variable yang dapat menyimpan data mengenai pecahan uang dan jumlah nya,
contoh nya : nominal 50000 berjumlah 2, nominal 20000 berjumlah 3, nominal 10000 berjumlah 5,
nominal 5000 berjumlah 8, nominal 2000 berjumlah 6, nominal 1000 berjumlah 10.

buat sebuah function bernama 'moneyExchanger' yang menerima 2 parameter,
parameter pertama adalah nominalYangAkanDitukar (minimal 100000) dan
parameter kedua adalah nominalYangDiutamakan.
Function tersebut akan menghasilkan pecahan uang dari nominalYangAkanDitukar dengan ketentuan :
a. Apabila nominalYangDiutamakan kosong, maka pecahan nya berurutan mulai dari pecahan terbesar nya
b. Apabila diisi, maka pecahan nya dimulai dari nominalYangDiutamakan tsb.
nominalYangDiutamakan hanya bisa diisi oleh pecahan uang yang ada di nomor 1.
c. Apabila jumlah pecahan tidak mencukupi, maka output nya : 'Uang pecahan tidak mencukupi'

*/

let money = [50000, 20000, 10000, 5000, 2000, 1000];
let total = [2, 3, 5, 8, 6, 10];

function moneyExchanger(nominalYangAkanDitukar, nominalYangDiutamakan) {
  let result = [];
  
  let findIndexPrioritas = function (value) {
    let index;
    for (let i = 0; i < money.length; i++) {
      if (money[i] == value) {
        index = i;
      }
    }
    return index;
  }

  let index = findIndexPrioritas(nominalYangDiutamakan) == undefined ? 0 : findIndexPrioritas(nominalYangDiutamakan);
  while (nominalYangAkanDitukar > 0 && index < 6) {
    if (nominalYangAkanDitukar >= money[index] && total[index] > 0) {
      result.push(money[index]);
      nominalYangAkanDitukar -= money[index];
      total[index]--;
    } else {
      index++;
    }
  }
  return nominalYangAkanDitukar == 0 ? result : 'Uang pecahan tidak cukup';
}

console.log(moneyExchanger(100000))
//hasilnya : [ 50000, 50000 ]

console.log(moneyExchanger(100000, 20000))
//hasilnya : [ 20000, 20000, 20000, 10000, 10000, 10000, 10000 ]

console.log(moneyExchanger(100000, 5000));
// hasilnya : Uang pecahan tidak cukup