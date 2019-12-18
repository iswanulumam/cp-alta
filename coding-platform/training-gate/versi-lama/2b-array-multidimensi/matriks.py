import sys 

# sys.stdin = open('input.txt', 'r')

N, M = map(int, input().split())

matriks = []

for i in range(0, N):
  l = list(map(int, input().split()))
  matriks.append(l)

for i in range(0, M):
  list = []
  for j in range(N - 1, -1, -1):
    list.append(str(matriks[j][i]))
  print(' '.join(list))

# 0 [0, 1, 2, 3]
# 1 [0, 1, 2, 3]
# 2 [0, 1, 2, 3]
# 3 [0, 1, 2, 3]