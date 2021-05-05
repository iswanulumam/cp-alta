
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