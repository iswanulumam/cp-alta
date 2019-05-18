import math

def dua_pangkat(bilangan):
  for i in range(0, 17):
    if bilangan == (2 ** i):
      return True
  return False

def dua_pangkat_(bilangan):
  if bilangan == 1:
    return True
  elif bilangan < 1:
    return False
  while True:
    if bilangan % 2 != 0:
      return False
    else:
      bilangan = bilangan // 2
      if bilangan == 2:
        return True

def log2(x):
  return (math.log10(x) / math.log10(2))

def isPowerTwo(n):
  return (math.ceil(log2(n))) == (math.floor(log2(n)))

N = int(input())

if isPowerTwo(N):
  print('TRUE')
else:
  print('FALSE')