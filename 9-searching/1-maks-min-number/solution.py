def MinAndMax(arr):
  minValue = 999999
  maxValue = -999999
  idxMin = None
  idxMax = None
  for i in range(len(arr)):
    if arr[i] > maxValue:
      maxValue = arr[i]
      idxMax = i
    if arr[i] < minValue:
      minValue = arr[i]
      idxMin = i
  return minValue, maxValue, idxMax if idxMax < idxMin else idxMin


print(MinAndMax([-1, 5, 6, 7, 4, 2])) # Min: -1, Max: 7, Index: 0
print(MinAndMax([5, 8, -7, 4, 2, -1])) # Min: -7, Max: 8, Index: 1
print(MinAndMax([-2, 5, 20, -7, 4, 7])) # Min: -7, Max: 20, Index: 2
print(MinAndMax([-2, -5, 22, 7, 4, 7])) # Min: -5, Max: 22, Index: 1
print(MinAndMax([4, 3, 21, 9, 4, 7])) # Min: 3, Max: 21, Index: 1