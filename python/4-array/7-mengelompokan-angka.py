def mengelompokkanAngka(arr):
  result = [[], [], []]
  for a in arr:
    if a % 3 == 0:
      result[2].append(a)
    elif a % 2 != 0:
      result[1].append(a)
    else:
      result[0].append(a)
  return result

# Driver Code
print(mengelompokkanAngka([2, 4, 6])) # [ [2, 4], [], [6] ]
print(mengelompokkanAngka([1, 2, 3, 4, 5, 6, 7, 8, 9])) # [ [ 2, 4, 8 ], [ 1, 5, 7 ], [ 3, 6, 9 ] ]
print(mengelompokkanAngka([100, 151, 122, 99, 111])) # [ [ 100, 122 ], [ 151 ], [ 99, 111 ] ]
print(mengelompokkanAngka([])) # [ [], [], [] ]