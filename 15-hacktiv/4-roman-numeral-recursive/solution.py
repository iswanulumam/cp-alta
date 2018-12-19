def toRoman(value, index = 12):
  number = [1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000]
  roman  = ['I', 'IV', 'V', 'IX', 'X', 'XL', 'L', 'XC', 'C', 'CD', 'D', 'CM', 'M']
  if index == -1:
    return ''
  elif value >= number[index]:
    value -= number[index]
    return roman[index] + toRoman(value, index)
  else:
    return '' + toRoman(value, index - 1)

print('My totally sweet testing script\n')
print('input | expected | actual')
print('------|----------|--------')
print('4     | IV       | ', toRoman(4))
print('9     | IX       | ', toRoman(9))
print('23    | XXIII    | ', toRoman(23))
print('1453  | MCDLIII  | ', toRoman(1453))
print('1646  | MDCXLVI  | ', toRoman(1646))