/**
Missing Numbers
-------------------
Implementasikan function `missingNumbers` untuk mencari
angka yang hilang dari array `numbers`.
Contoh:
  - Input: [9, 4, 2, 8]
    Output: [1, 3, 5, 6, 7]
  - Input: [8, 3, 2, 1, 7, 5, 6]
    Output: [4]
  - Input: [4, 2, 3, 1]
    Output: []

RULES:
--------
- WAJIB MENGGUNAKAN ALGORITMA/PSEUDOCODE
- Dilarang menggunakan built-in function:
  - .max()
  - .min()
  - .sort()
- Dilarang menggunakan spread operator ( abaikan jika tidak tahu ini apa, belum penting untuk sekarang :) )

FUNCTION missingNumbers (numbers)
  FUNCTION findMax (arr)
    INIT max = -Infinity
    FOR i of arr
      IF (i > max)
        max = i
      END IF
    END FOR
    RETURN max
  END FUNCTION
  
  FUNCTION findMin (arr)
    INIT min = Infinity
    FOR (let i of arr)
      IF (i < min) 
        min = i
      END IF
    END FOR
    RETURN min
  END FUNCTION

  INIT max = findMax(numbers)
  INIT min = findMin(numbers)
  INIT tabel = {}
  FOR i of numbers)
    IF (tabel[i] == undefined)
      tabel[i] = true
    END IF
  END FOR
  INIT ans = []
  FOR i = min to i <= max increment i
    IF (!tabel[i])
      ans.push(i)
    END IF
  END FOR
  RETURN ans
END FUNCTION

*/
function missingNumbers (numbers) {
  let findMax = function(arr) {
    let max = -Infinity;
    for (let i of arr) {
      if (i > max) {
        max = i;
      }
    }
    return max;
  }
  
  let findMin = function(arr) {
    let min = Infinity;
    for (let i of arr) {
      if (i < min) {
        min = i;
      }
    }
    return min;
  }  
  let max = findMax(numbers);
  let min = findMin(numbers);
  let tabel = {};
  for (let i of numbers) {
    if (tabel[i] == undefined) {
      tabel[i] = true;
    }
  }
  let ans = [];
  for (let i = min; i <= max; i++) {
    if (!tabel[i]) {
      ans.push(i);
    }
  }
  return ans;
}

console.log(missingNumbers([1, 5, 10, 7, 6])); // [2, 3, 4, 8, 9]
console.log(missingNumbers([10, 1])); // [2, 3, 4, 5, 6, 7, 8, 9]
console.log(missingNumbers([90, 92, 91])); // []
console.log(missingNumbers([60, 54, 50])); // [51, 52, 53, 55, 56, 57, 58, 59]
console.log(missingNumbers([])); // []
