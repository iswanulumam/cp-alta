function xo(str) {
  let counter = 0
  for (s of str) {
    if (s == 'x') {
      counter += 1
    } else if (s == 'o') {
      counter -= 1
    }
  }
  return counter == 0 ? true : false
}

console.log(xo('xoxoxo')) // True
console.log(xo('oxooxo')) // False
console.log(xo('oxo')) // False
console.log(xo('xxxooo')) // True
console.log(xo('xoxooxxo')) // True