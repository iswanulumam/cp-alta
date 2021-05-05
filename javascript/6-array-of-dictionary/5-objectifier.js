
function createObj (arr) {
  let obj = {};
  obj[arr[0]] = {};
  let key = '';
  for (let i of arr[1]) {
    if (typeof i == 'string') {
      key = i;
      obj[arr[0]][key] = [];
    } else {
      for (let j of i) {
        obj[arr[0]][key].push(j);
      }
    }
  }
  return obj;
}

function objectifier(data) {
  let result = {};
  for (let i of data) {
    Object.assign(result, createObj(i));
  }
  return result;
}

//EXAMPLE TEST

var data = [
  [ 'animals',
    [
      'dogs', ['Corgi', 'Sheltie'],
      'cats', ['Tabby','Black'],
      'pigs', ['Teacup']
    ]
  ],
  [ 'guitars',
    [
      'Fender', ['Telecaster', 'Stratocaster','Jazzmaster'],
      'Gibson', ["Gibson Flying-V", 'Firebird', 'Les Paul']
    ]
  ]
];

console.log(objectifier(data));
//OUTPUT: 
// {
// animals : {
//     dogs : ['Corgi', 'Sheltie'],
//     cats : ['Tabby','Black'],
//     pigs : ['Teacup']
// },
// guitars : {
//     Fender : ['Telecaster', 'Stratocaster','Jazzmaster'],
//     Gibson : ["Gibson Flying-V", 'Firebird', 'Les Paul']
// }
// }