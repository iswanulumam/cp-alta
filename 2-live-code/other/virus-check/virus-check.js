/**
Virus Check
-----------
Implementasikan function `virusCheck` untuk menghitung ada berapa virus yang
terdapat di dalam `str` berdasarkan `viruses` yang dicari.

Contoh 1:
input:
  str: 'qlD4MZax0raQqew'
  viruses: 'x|0|q' ==> berarti mencari x, 0 dan q

output: 4 viruses detected

Contoh 2:
input:
  str: 'HH0NBP1zRa'
  viruses: 'h|r' ==> berarti mencari h dan r

outuput: 3 viruses detected

RULES:
 - WAJIB MENYERTAKAN ALGORITMA/PSEUDOCODE
 - DILARANG MENGGUNAKAN REGEX

FUNCTION virusCheck (str, viruses)
  IF (str == '' || viruses == '' || str == undefined || viruses == undefined)
    RETURN 'No virus detected'
  END IF

  INIT low = str.toLowerCase()
  INIT vlow = viruses.toLowerCase()
  INIT arrv = vlow.split('|')
  INIT tabel = {}

  FOR i of arrv
    IF (tabel[i] == undefined)
      tabel[i] = true
    END IF
  END FOR

  INIT ans = 0
  FOR i of low
    IF (tabel[i])
      ans++
    END IF
  END FOR

  IF (ans == 0)
    RETURN 'No virus detected'
  ELS IF (ans == 1) {
    RETURN '1 virus detected'
  ELSE
    RETURN `(ans) viruses detected`
  END IF
END FUNCTION

*/

function virusCheck (str, viruses) {
  if (str == '' || viruses == '' || str == undefined || viruses == undefined) {
    return 'No virus detected';
  }
  let low = str.toLowerCase();
  let vlow = viruses.toLowerCase();
  let arrv = vlow.split('|');
  let tabel = {};
  for (let i of arrv) {
    if (tabel[i] == undefined) {
      tabel[i] = true;
    }
  }
  let ans = 0;
  for (let i of low) {
    if (tabel[i]) {
      ans++;
    }
  }
  if (ans == 0) {
    return 'No virus detected';
  } else if (ans == 1) {
    return '1 virus detected';
  } else {
    return `${ans} viruses detected`
  }
}

console.log(virusCheck('qlD4MZax0raQqew', 'x|0|q')); // 5 viruses detected
console.log(virusCheck('HH0NBP1zRa', 'h|r')); // 3 viruses detected
console.log(virusCheck('4O4TmIF6ONaiMlzpXxPqwy', '4|X|p')); // 6 viruses detected
console.log(virusCheck('mjBgPlzks', 'm')); // 1 virus detected
console.log(virusCheck('AIn4Ks05bBaa', 'x')); // No virus detected
console.log(virusCheck('RsMFjBUjvIaP')); // No virus detected
console.log(virusCheck('')); // No virus detected