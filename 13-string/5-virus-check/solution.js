/**
Virus Check
-----------
Implementasikan function `virusCheck` untuk menghitung ada berapa huruf x / y / z
di dalam `str`.
Contoh ada di test cases

RULES:
 - WAJIB MENYERTAKAN ALGORITMA/PSEUDOCODE
 - DILARANG MENGGUNAKAN REGEX

FUNCTION virusCheck (str)
  INIT ans = 0
  INIT lower = str.toLowerCase()
  FOR i of lower
    IF (i == 'x' OR i == 'y' OR i == 'z')
      ans++
    END IF
  END FOR

  IF ans > 0 
    RETURN `"ans" viruses detected`
  ELSE
    RETURN `No virus detected`
  END IF
END FUNCTION


*/

function virusCheck (str) {
  let ans = 0;
  let lower = str.toLowerCase();
  for (let i of lower) {
    if (i == 'x' || i == 'y' || i == 'z') {
      ans++;
    }
  }
  return ans > 0 ? `${ans} viruses detected` : `No virus detected`;
}

console.log(virusCheck('qlD4MZax0raQqew')); // 2 viruses detected
console.log(virusCheck('HH0NBP1zRa')); // 1 virus detected
console.log(virusCheck('4O4TmIF6ONaiMlzpXxPqwy')); // 4 viruses detected
console.log(virusCheck('mjBgPlzks')); // 1 virus detected
console.log(virusCheck('AIn4Ks05bBaa')); // No virus detected
console.log(virusCheck('RsMFjBUjvIaP')); // No virus detected
console.log(virusCheck('')); // No virus detected