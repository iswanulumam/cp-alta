def sorting(arr):
  freq = [None] * 50
  for a in arr:
    if freq[a] == None:
      freq[a] = { a: 1 }
    else:
      freq[a][a] += 1
  return freq

print(sorting([5, 5, 4, 6, 4])) # [4, 4, 5, 5, 6]
# print(sorting([2, 3, 2, 4, 5, 12, 2, 3, 3, 3, 12])) # [3, 3, 3, 3, 2, 2, 2, 12, 12, 4, 5]