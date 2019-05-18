
N = int(input())

for i in range(N, 0, -1):
  line = []
  for j in range(1, N + 1):
    if j >= i:
      line.append('*')
    else:
      line.append(' ')
  print(''.join(line))