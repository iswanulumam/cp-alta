function checkAllVowels(str) {
  let vowel = ['a', 'i', 'u', 'e', 'o']
  for (let s of str) {
    c = s.toLowerCase()
    if (vowel.indexOf(c) === -1) {
      return false
    }
  }
  return true
}

console.log(checkAllVowels('AiUeO')) // true
console.log(checkAllVowels('aioeo')) // true
console.log(checkAllVowels('AIUEO')) // true
console.log(checkAllVowels('NotAllVowels')) // false