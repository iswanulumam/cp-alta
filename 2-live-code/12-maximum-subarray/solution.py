def maxSequence(arr):
  max = 0
  for i in range(len(arr)):
    sum = 0
    for j in arr[i:]:
      sum += j
      if sum > max:
        max = sum
  return max

print(maxSequence([-2, 1, -3, 4, -1, 2, 1, -5, 4])) # 6
print(maxSequence([-2, -5, 6, -2, -3, 1, 5, -6])) # 7
print(maxSequence([-2, -3, 4, -1, -2, 1, 5, -3])) # 7