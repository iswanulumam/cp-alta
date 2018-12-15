def statistik(kata, arr1, arr2):
  minVal = [999, 999]
  maxVal = [-999, -999]

  if kata == 'min':
    for i in arr1:
      if i < minVal[0]:
        minVal[0] = i
    for j in arr2:
      if j < minVal[1]:
        minVal[1] = j
    return minVal
  elif kata == 'max':
    for i in arr1:
      if i > maxVal[0]:
        maxVal[0] = i
    for j in arr2:
      if j > maxVal[1]:
        maxVal[1] = j
    return maxVal

print(statistik('min', [1, 1, 1] , [8, 15, 17, 9])) # 1 8
print(statistik('max', [4, 8, 9, 12] , [33, 88, 99 ,11])) # 12 99
print(statistik('min', [1, 2, 5, 2, 2] , [67, 45, 55])) # 1 45
print(statistik('max', [6, 2, 4, 10, 8, 2] , [6, 5, 13, 23])) # 10 23
print(statistik('min', [5, 11, 18, 6], [3, 1, 8, 13])) # 5 1