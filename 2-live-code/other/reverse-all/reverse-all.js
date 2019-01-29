/**
Reverse All
Implementasikan function reverseAll untuk membalikkan `arr` DAN setiap elemen string yang ada di
dalamnya.
Contoh:
- input: ['devil jin', 'geese', 'akuma']
  output: ['amuka', 'eseeg', 'nij lived']
- input: ['alisa', 'xiaoyu', 'nina', 'lili']
  output: ['ilil', 'anin', 'uyoaix', 'asila']
- input: []
  output: []


ATURAN CODING:
--------------
- Wajib menuliskan pseudocode atau algoritma.
  Tidak ada pseudocode / pseudocode tidak match dengan kode maka indikasi
  soal tidak diselesaikan secara pribadi dan tidak akan dinilai.
- Dilarang menggunakan built-in function:
  - .map()
  - .filter()
  - .reduce()
  - .reverse()
  - .split()
  - .join()
*/

/**
Reverse All PSEODOCODE

--------------

FUNCTION RevStr (Str)
  INIT Res with empty string
  
  ITERATE From (length of Str - 1) to 0 with decrement of i
    res = Res + Str of i
  END OF ITERATE

  RETURN Value to Res
END OF FUNCTION

--------------

INPUT (Arr)

INTI Result type of Array empty

ITERATE From (length of Arr - 1) to 0 with the decrement of i
  Push value array of i and format value with call function RevStr
END OF ITERATE

RETURN VALUE TO Result

--------------

*/

function reverseAll (arr) {

  var revStr = function(str) {
    let res = '';
    for (let i = str.length - 1; i >= 0; i--)
      res += str[i];
    return res;
  }

  let result = [];
  for (let i = arr.length - 1; i >= 0; i--)
    result.push(revStr(arr[i]))
  
  return result;
}

console.log(reverseAll(['dimitri', 'sergei', 'alexei']));
// ['iexela', 'iegres', 'irtimid']

console.log(reverseAll(['kira', 'lawliet', 'near', 'mello']));
// [ 'ollem', 'raen', 'teilwal', 'arik' ]

console.log(reverseAll([]));
// []
