def cariMean(arr):
  total = 0
  for a in arr:
    total += a
  return int(round(total / float(len(arr))))

# TEST CASES
print(cariMean([1, 2, 3, 4, 5])) # 3
print(cariMean([3, 5, 7, 5, 3])) # 5
print(cariMean([6, 5, 4, 7, 3])) # 5
print(cariMean([1, 3, 3])) # 2
print(cariMean([7, 7, 7, 7, 7])) # 7