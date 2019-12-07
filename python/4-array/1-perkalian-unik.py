def perkalianUnik(arr): 
  total = 1
  for a in arr:
    total *= a
  list = []
  for item in arr:
    list.append(total // item)
  return list

# Driver Code
print(perkalianUnik([2, 4, 6])) # [24, 12, 8]
print(perkalianUnik([1, 2, 3, 4, 5])) # [120, 60, 40, 30, 24]
print(perkalianUnik([1, 4, 3, 2, 5])) # [120, 30, 40, 60, 24]
print(perkalianUnik([1, 3, 3, 1])) # [9, 3, 3, 9]
print(perkalianUnik([2, 1, 8, 10, 2])) # [160, 320, 40, 32, 160]