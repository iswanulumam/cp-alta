def binaryNumbers(n):
  bitstring = ''

  while n > 0:
    bit = str(n % 2)
    quotient = n // 2
    bitstring += bit
    n = quotient
  
  conse = bitstring.split('0')
  maks = 0
  for c in conse:
    if len(c) > maks:
      maks = len(c)
  return maks 

print(binaryNumbers(5)) # 1
print(binaryNumbers(13)) # 2