n = int(input())

error = False

for i in range(1, n + 1):
  if i == 93:
    error = True
  if error != True and i % 10 != 0:
    print(i)
if error:
  print('ERROR')
