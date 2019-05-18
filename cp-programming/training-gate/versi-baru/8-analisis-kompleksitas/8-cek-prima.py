
import math
import sys 

def isPrime(N):
  if N < 2:
    return False
  for i in range(2, int(math.sqrt(N)) + 1):
    if N % i == 0:
      return False
  return True

# sys.stdin = open('input.txt', 'r')

N = int(input())
for i in range(0, N):
  val = int(input())
  if isPrime(val):
    print('YA')
  else:
    print('BUKAN')
