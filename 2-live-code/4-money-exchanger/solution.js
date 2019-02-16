
function moneyExchanger(nominalYangAkanDitukar, nominalYangDiutamakan) {
  let money = [50000, 20000, 10000, 5000, 2000, 1000];
  let total = [2, 3, 5, 8, 6, 10];
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