
// @problem: toko X

function countProfit(shoppers) {
  if (shoppers.length === 0) return [];
  let listBarang = [
    ['Sepatu Stacattu', 1500000, 10], // listBarang[0][2] -> entity
    ['Baju Zoro', 500000, 2],
    ['Sweater Uniklooh', 175000, 1]
  ];
  let data = [];
  data[0] = {}, data[1] = {}, data[2] = {};
  data[0]['product'] = 'Sepatu Stacattu', data[1]['product'] = 'Baju Zoro', data[2]['product'] = 'Sweater Uniklooh';
  data[0]['shoppers'] = [], data[1]['shoppers'] = [], data[2]['shoppers'] = [];
  data[0]['leftOver'] = listBarang[0][2], data[1]['leftOver'] = listBarang[1][2], data[2]['leftOver'] = listBarang[2][2];
  data[0]['totalProfit'] =  0, data[1]['totalProfit'] =  0, data[2]['totalProfit'] =  0;

  for (let person of shoppers) {
    if (person.product === listBarang[0][0]) {
      if (data[0]['leftOver'] >= person.amount) {
        data[0]['shoppers'].push(person.name);
        data[0]['leftOver'] -= person.amount;
        data[0]['totalProfit'] += person.amount * listBarang[0][1];
      }
    }
    if (person.product === listBarang[1][0]) {
      if (data[1]['leftOver'] >= person.amount) {
        data[1]['shoppers'].push(person.name);
        data[1]['leftOver'] -= person.amount;
        data[1]['totalProfit'] += person.amount * listBarang[1][1];
      }
    }
    if (person.product === listBarang[2][0]) {
      if (data[2]['leftOver'] >= person.amount) {
        data[2]['shoppers'].push(person.name);
        data[2]['leftOver'] -= person.amount;
        data[2]['totalProfit'] += person.amount * listBarang[2][1];
      }
    }
  }
  return data;
}

// TEST CASES
console.log(countProfit([{name: 'Windi', product: 'Sepatu Stacattu', amount: 2}, {name: 'Vanessa', product: 'Sepatu Stacattu', amount: 3}, {name: 'Rani', product: 'Sweater Uniklooh', amount: 2}]));
//[ { product: 'Sepatu Stacattu',
//   shoppers: [ 'Windi', 'Vanessa' ],
//   leftOver: 5,
//   totalProfit: 7500000 },
// { product: 'Baju Zoro',
//   shoppers: [],
//   leftOver: 2,
//   totalProfit: 0 },
// { product: 'Sweater Uniklooh',
//   shoppers: [],
//   leftOver: 1,
//   totalProfit: 0 } ]

console.log(countProfit([{name: 'Windi', product: 'Sepatu Stacattu', amount: 8}, {name: 'Vanessa', product: 'Sepatu Stacattu', amount: 10}, {name: 'Rani', product: 'Sweater Uniklooh', amount: 1}, {name: 'Devi', product: 'Baju Zoro', amount: 1}, {name: 'Lisa', product: 'Baju Zoro', amount: 1}]));
// [ { product: 'Sepatu Stacattu',
//     shoppers: [ 'Windi' ],
//     leftOver: 2,
//     totalProfit: 12000000 },
//   { product: 'Baju Zoro',
//     shoppers: [ 'Devi', 'Lisa' ],
//     leftOver: 0,
//     totalProfit: 1000000 },
//   { product: 'Sweater Uniklooh',
//     shoppers: [ 'Rani' ],
//     leftOver: 0,
//     totalProfit: 175000 } ]
console.log(countProfit([{name: 'Windi', product: 'Sepatu Naiki', amount: 5}]));
// [ { product: 'Sepatu Stacattu',
//     shoppers: [],
//     leftOver: 10,
//     totalProfit: 0 },
//   { product: 'Baju Zoro',
//     shoppers: [],
//     leftOver: 2,
//     totalProfit: 0 },
//   { product: 'Sweater Uniklooh',
//     shoppers: [],
//     leftOver: 1,
//     totalProfit: 0 } ]
console.log(countProfit([])); //[]