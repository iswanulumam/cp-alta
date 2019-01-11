def findNotRelative(a, b):
  result = []
  for item_a in a:
    if item_a not in b:
      result.append(item_a)
  return result

print(findNotRelative([ 3, 6, 10, 12, 15 ], [ 1, 3, 5, 10, 16 ])) # [ 6, 12, 15]
print(findNotRelative([ 10, 20, 36, 59 ], [ 5, 10, 15, 59 ])) # [20, 36]
print(findNotRelative([ 1, 2, 3], [2, 1, 3])) # []