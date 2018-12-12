def primeNumber(N):
  if N <= 1:
    return False
  for i in range(2, N):
    if N % i == 0:
      return False
  return True

# Driver Code
print(primeNumber(1)) # False
print(primeNumber(2)) # True
print(primeNumber(3)) # True
print(primeNumber(7)) # True
print(primeNumber(6)) # False
print(primeNumber(23)) # True
print(primeNumber(33)) # False