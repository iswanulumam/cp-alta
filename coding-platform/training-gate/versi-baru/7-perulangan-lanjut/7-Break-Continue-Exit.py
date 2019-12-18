

N = int(input())

for i in range(1, N + 1):
  if i == 42:
    print('ERROR')
    break
  elif i % 10 == 0:
    pass
  else:
    print(i)