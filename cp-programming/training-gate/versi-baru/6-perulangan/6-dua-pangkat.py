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

N = int(input())

if dua_pangkat(N):
  print('ya')
else:
  print('bukan')