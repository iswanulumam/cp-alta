/**
Array Injector
--------------
Implementasikan function `arrayInjector` menerima 3 parameter yaitu firstData, index dan secondData
dimana function ini meminta untuk menyisipkan `secondData` ke `firstData` berdasarkan paramter `index`
yang telah diberikan dan menempatkan `secondData` dimulai dari parameter `index` tersebut

Contoh:
  - input: [8, 'foobar', 'foobaz'], 1, ['bar', 'baz']
    output: [8, 'bar', 'baz', 'foobar', 'foobaz']

Aturan coding:
---------------
- WAJIB MENYERTAKAN ALGORITMA/PSEUDOCODE
- Dilarang menggunakan built-in function:
    - .splice()
    - spread operator(...)

ALGORITMA
------------------------------

INIT firstData[], index, secondData[]

INIT Result[]

FOR i until firstData.length
    Result.push(firstData[i])
    IF (i equal index - 1)
        FOR j of secondData
            Result.push(j)
        ENDFOR
    END IF
END FOR

PRINT Result[]

*/

function arrayInjector(firstData, index, secondData) {
    let result = [];
    for (let i = 0; i < firstData.length; i++) {
        result.push(firstData[i]);

        if (i === index - 1) {
            for (let i = 0; i < secondData.length; i++) {
                result.push(secondData[i]);
            }
        }
    }
    return result;
}

console.log(arrayInjector([1, 5, 6, 7], 1, [2, 3, 4]));
// [1, 2, 3, 4, 5, 6, 7]

console.log(arrayInjector([10, 20, 70], 2, [30, 40, 50, 60]));
// [10, 20, 30, 40, 50, 60, 70]

console.log(arrayInjector(['Dimitri', 'Alexei', 'Alexander', 'Alisa'], 3, ['Dragunov']));
// ['Dimitri', 'Alexei', 'Alexander', 'Dragunov', 'Alisa']

// function arrayInjector(firstData, index, secondData) {
//     let result = [];
//     for (let i = 0; i < firstData.length; i++) {
//         result.push(firstData[i]);
//         if (i === index - 1) {
//             for (let j of secondData) {
//                 result.push(j);
//             }
//         }
//     }
//     return result;
// }