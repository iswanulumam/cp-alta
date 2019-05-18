
N, K = map(int, input().split())

list = []

for i in range(1, N + 1):
  if i % K == 0:
    list.append('*')
  else:
    list.append(i)

print(' '.join(map(str, list)))