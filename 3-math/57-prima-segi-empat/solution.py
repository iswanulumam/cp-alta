def checkPrima(N):
  if N <= 1:
    return False
  for i in range(2, N):
    if N % i == 0:
      return False
  return True

def primaAfterX(X):
  X = X + 1
  while not checkPrima(X):
    X = X + 1
  return X

def primaSegiEmpat(P, L, X):
  start = primaAfterX(X)
  total = 0
  for _ in range(L):
    for _ in range(P):
      total = total + start
      print(start, end=' ')
      start = primaAfterX(start)
    else:
      print('')
  print('Total:', total)

# Driver Code
primaSegiEmpat(2, 3, 13)
'''
17 19
23 29
31 37
Total: 156
'''

primaSegiEmpat(5, 2, 1)
'''
2  3  5  7 11
13 17 19 23 29
Total: 129
'''