function toRoman(value, index = 12) {
  const number = [1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000]
  const roman  = ['I', 'IV', 'V', 'IX', 'X', 'XL', 'L', 'XC', 'C', 'CD', 'D', 'CM', 'M']
  if (index === -1) {
    return ''
  } else if (value >= number[index]) {
    value -= number[index]
    return roman[index] + toRoman(value, index)
  } else {
    return '' + toRoman(value, index - 1)
  }
}

console.log('My totally sweet testing script\n')
console.log('input | expected | actual')
console.log('------|----------|--------')
console.log('4     | IV       | ', toRoman(4))
console.log('9     | IX       | ', toRoman(9))
console.log('23    | XXIII    | ', toRoman(23))
console.log('1453  | MCDLIII  | ', toRoman(1453))
console.log('1646  | MDCXLVI  | ', toRoman(1646))