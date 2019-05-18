def compareTriplets(a, b):
  points = [0, 0]
  for i in range(len(a)):
    if a[i] > b[i]:
      points[0] += 1
    if a[i] < b[i]:
      points[1] += 1
  return points

print(compareTriplets([17, 28, 30], [99, 16, 8])) # [2, 1]