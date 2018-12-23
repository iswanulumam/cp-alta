def findMin(arr):
  min = 999
  for a in arr:
    if a < min:
      min = a
  return min

def highestGlobalMinimum(firstArr, secondArr) :
  first = findMin(firstArr)
  second = findMin(secondArr)
  return max(first, second)

print(highestGlobalMinimum([1, 1, 1] , [8, 15, 17, 9])) # 8
print(highestGlobalMinimum([4, 8, 9, 12] , [33, 88, 99 ,11])) # 11
print(highestGlobalMinimum([1, 2, 5, 2, 2] , [67, 45, 55])) # 45
print(highestGlobalMinimum([6, 2, 4, 10, 8, 2] , [6, 5, 13, 23])) # 5
print(highestGlobalMinimum([5, 11, 18, 6], [3, 1, 8, 13])) # 5