def aVeryBigSum(arr):
  totalSum = 0
  for a in arr:
    totalSum += a
  return totalSum

print(aVeryBigSum([1000000001, 1000000002, 1000000003, 1000000004, 1000000005])) # 5000000015
