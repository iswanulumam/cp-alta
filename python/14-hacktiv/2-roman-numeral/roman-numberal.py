def toRoman(value):
  roman = {
    1000: 'M',
    900: 'CM',
    500: 'D',
    400: 'CD',
    100: 'C',
    90: 'XC',
    50: 'L',
    40: 'XL',
    10: 'X',
    9: 'IX',
    5: 'V',
    4: 'IV',
    1: 'I',
  }
  result = ''
  for key in roman:
    while value >= key:
      result += roman[key]
      value -= key
  return result

print('My totally sweet testing script\n')
print('input | expected | actual')
print('------|----------|--------')
print('4     | IV       | ', toRoman(4))
print('9     | IX       | ', toRoman(9))
print('23    | XXIII    | ', toRoman(23))
print('1453  | MCDLIII  | ', toRoman(1453))
print('1646  | MDCXLVI  | ', toRoman(1646))