

N = int(input())

number = 0

for i in range(1, N + 1):
  list = []
  for _ in range(0, i):
    if number == 10:
      number = 0
    list.append(str(number))
    number += 1
  print(''.join(list))