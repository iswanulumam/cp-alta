def membalikBilangan(bil):
  reverse = 0
  while bil != 0:
    remainder = bil % 10
    reverse = (reverse * 10) + remainder
    bil = bil // 10
  return reverse

N = int(input())
for i in range(N):
  bil = int(input())
  print(membalikBilangan(bil))