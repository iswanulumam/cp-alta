def primeNumber(N):
  if N <= 1:
    return False
  for i in range(2, N):
    if N % i == 0:
      return False
  return True

print(primeNumber(2))

def fullPrima(bilangan):
  digit_prima = [2, 3, 5, 7]
  if not primeNumber(bilangan):
    return 'Tidak'
  for i in str(bilangan):
    if int(i) not in digit_prima:
      return 'Tidak'
  return 'Ya'

print(fullPrima(2)) # Ya
print(fullPrima(3)) # Ya
print(fullPrima(11)) # Tidak
print(fullPrima(13)) # Tidak
print(fullPrima(23)) # Ya
print(fullPrima(29)) # Tidak
print(fullPrima(37)) # Ya
print(fullPrima(41)) # Tidak
print(fullPrima(43)) # Tidak
print(fullPrima(53)) # Ya