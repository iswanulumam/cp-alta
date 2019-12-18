import math
import sys 

def agakPrima(N):
  totalFaltor = 0
  if N < 2:
    return False
  for i in range(1, N + 1):
    if N % i == 0:
      totalFaltor += 1
  if totalFaltor <= 4:
    return 'YA'
  return 'TIDAK'

def agak(N):
  faktor = 0
  prime = True
  for i in range(2, int(math.sqrt(N) + 1)):
    if N % i == 0:
      prime = False
  if prime == False:
    for i in range(2, N):
      if N % i == 0:
        faktor += 1
      if faktor > 2:
        return False
  return (faktor <= 2) or prime

# sys.stdin = open('input.txt', 'r')

T = int(input())
for i in range(T):
  N = int(input())
  if agak(N):
    print('YA')
  else:
    print('TIDAK')