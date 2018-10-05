def primeNumber(number):
  totalFactor = 0

  for i in range(1, number + 1):
    if number % i == 0:
      totalFactor = totalFactor + 1
  
  if totalFactor == 2:
    return True
  return False

# Driver Code
print(primeNumber(1)) # False
print(primeNumber(2)) # True
print(primeNumber(3)) # True
print(primeNumber(7)) # True
print(primeNumber(6)) # False
print(primeNumber(23)) # True
print(primeNumber(33)) # False