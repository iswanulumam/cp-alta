def faktorial(N):
  bil = 1
  for i in range(1, N + 1):
    bil = bil * i
  return bil

def faktorialRecursive(N):
  if N == 0:
    return 1
  else:
    return N * faktorialRecursive(N - 1)

bil = int(input())

if bil >= 0 and bil <= 10:
  print(faktorialRecursive(bil))
else:
  print('ditolak')
