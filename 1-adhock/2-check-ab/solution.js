function checkAB(str) {
  for (let i = 0; i < str.length; i++) {
    if ((str[i] == 'a' && str[i - 4] == 'b') || (str[i] == 'a' && str[i + 4] == 'b')) {
      return true
    }
  }
  return false
}

// Driver Code
console.log(checkAB('lane borrowed')) // True
console.log(checkAB('i am sick')) // False
console.log(checkAB('you are boring')) // True
console.log(checkAB('barbarian')) // True
console.log(checkAB('bacon and meat')) // False