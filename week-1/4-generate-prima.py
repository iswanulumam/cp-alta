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

print(generatePrime(17))
print(generatePrime(41))