def primeNumber(N):
  if N <= 1:
    return False
  for i in range(2, N):
    if N % i == 0:
      return False
  return True

def getPrime(numberX):
  primeX = 1
  counter = 0
  while True:
    if primeNumber(primeX):
      counter += 1
    if counter == numberX:
      break
    primeX += 1
  return primeX

print(getPrime(1)) # 2
print(getPrime(5)) # 11
print(getPrime(8)) # 19
print(getPrime(9)) # 23
print(getPrime(10)) # 29
print(getPrime(168)) # 997
print(getPrime(1000)) # 7919