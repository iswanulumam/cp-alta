def primeNumber(N):
  if N <= 1:
    return False
  for i in range(2, N):
    if N % i == 0:
      return False
  return True

def generatePrime(N):
  primesNumber = []

  for i in range(2, N + 1):
    if primeNumber(i):
      primesNumber.append(i)
  
  return primesNumber

print(generatePrima(17)) # 2 3 5 7 11 13 17
print(generatePrima(41)) # 2 3 5 7 11 13 17 19 23 29 31 37 41