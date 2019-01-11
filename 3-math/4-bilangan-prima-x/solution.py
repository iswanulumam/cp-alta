def primeNumber(N):
  if N <= 1:
    return False
  for i in range(2, N):
    if N % i == 0:
      return False
  return True

def getPrime(X):
  i = 1
  number = 0
  while True:
    if primeNumber(i):
      number += 1
    if number == X:
      return i
    i += 1

print(getPrime(1)) # 2
print(getPrime(5)) # 11
print(getPrime(8)) # 19
print(getPrime(9)) # 23
print(getPrime(10)) # 29