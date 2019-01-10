def primeNumber(N):
  if N <= 1:
    return False
  for i in range(2, N):
    if N % i == 0:
      return False
  return True

def fullPrima(bilangan):
  digit_prima = {
    2: True,
    3: True,
    5: True,
    7: True
  }
  if primeNumber(bilangan) == False:
    return 'Tidak'
  
  while bilangan != 0:
    remainder = bilangan % 10
    if remainder not in digit_prima:
      return 'Tidak'
    bilangan = bilangan // 10

  return 'Ya'

print(fullPrima(2)) # Ya
print(fullPrima(3)) # Ya
print(fullPrima(5)) # Ya
print(fullPrima(7)) # Ya
print(fullPrima(11)) # Tidak
print(fullPrima(13)) # Tidak
print(fullPrima(17)) # Tidak
print(fullPrima(19)) # Tidak
print(fullPrima(23)) # Ya
print(fullPrima(29)) # Tidak
print(fullPrima(31)) # Tidak
print(fullPrima(37)) # Ya
print(fullPrima(41)) # Tidak
print(fullPrima(43)) # Tidak
print(fullPrima(47)) # Tidak
print(fullPrima(53)) # Ya