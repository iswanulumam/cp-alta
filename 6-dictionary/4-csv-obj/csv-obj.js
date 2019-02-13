/**
CSV to Object
-------------
Implementasikan function `csvToObject` untuk merubah string yang
diberikan menjadi sebuah object baru.
`csvToObject` menerima 2 parameter yaitu `keys` dan `values`
yang merupakan sebuah CSV (Comma Separated Values)
Keys & values di dalam object baru nantinya akan diambil dari kedua
parameter yang diberikan.
Contoh:
- Input: 'name,age', 'Aang,112'
  Output: { name: 'Aang', age: '112' }
- Input: 'title,description,content', 'Foobar,Foo and Bar,Foobar content'
  Output: { title: 'Foobar', description: 'Foo and Bar', content: 'Foobar Content' }
- Input: '', ''
  Output: { }

  RULES
  =====
  - Dilarang menggunakan built in function .split

*/


function csvToObject (keys, values) {
  if (keys == '' || values == '') return {};

  let splitManual = function(str) {
    let ans = [];
    let res = '';
    for (let i of str) {
      if (i == ',') {
        ans.push(res);
        res = '';
      } else {
        res += i;
      }
    }
    ans.push(res);
    return ans;
  };  

  let arrKeys = splitManual(keys);
  let arrValues = splitManual(values);

  let result = {};
  for (i = 0; i < arrKeys.length; i++) {
    result[arrKeys[i]] = arrValues[i];
  }
  return result;
}

console.log(csvToObject('name,phoneNumber', 'Dimitri,+666123654'));
// { name: 'Dimitri', phoneNumber: '+666123654' }

console.log(csvToObject('firstName,lastName,nationality', 'Sergei,Dragunov,Russia'));
// { firstName: 'Sergei', lastName: 'Dragunov', nationality: 'Russia' }

console.log(csvToObject('', ''));
// { }
