/*

Objectifier
Write a function that accepts a nested array and returns a well-structured object.
The array passed into the function will look like the one below and have only four levels of nested-ness.
As you can see in the examples below, the structure of the input is an array.
Each element of that array is an array.
The first element of the nested array (eg. animals) should become a property key on the return object.
The second element of the nested array is also an array, where the elements alternate between property names (eg. dogs)
and corresponding property values (eg. ['Corgi, 'Sheltie']).


Example
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
INPUT: objectifier(data);
OUTPUT:
{
  animals : {
    dogs : ['Corgi', 'Sheltie'],
    cats : ['Tabby','Black'],
    pigs : ['Teacup']
},
  guitars : {
    Fender : ['Telecaster', 'Stratocaster','Jazzmaster'],
    Gibson : ["Gibson Flying-V", 'Firebird', 'Les Paul']
  }
}

*/

function objectifier(data) {

  var createObj = function(arr) {
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