def solve(arr):
  maks = -999999999
  mins = 999999999
  sums = 0

  for a in arr:
    if a > maks:
      maks = a
    if a < mins:
      mins = a
    sums += a
  return [mins, maks, sums / len(arr)]

T = int(input())

array = []
for t in range(T):
  N = float(input())
  array.append(N)

result = solve(array)
print("{:.2f} {:.2f} {:.2f}".format(result[0], result[1], result[2]))