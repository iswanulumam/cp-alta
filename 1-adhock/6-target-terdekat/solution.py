def targetTerdekat(arr):
  result = 999
  mapper = {
    'o': [],
    'x': [],
  }

  for i in range(0, len(arr)):
    if arr[i] == 'o':
      mapper['o'].append(i)
    elif arr[i] == 'x':
      mapper['x'].append(i)
  
  for o in mapper['o']:
    for x in mapper['x']:
      if abs(o - x) < result:
        result = abs(o - x)

  return 0 if result == 999 else result

# Driver Code
print(targetTerdekat([' ', ' ', 'o', ' ', ' ', 'x', ' ', 'x'])) # 3
print(targetTerdekat(['o', ' ', ' ', ' ', 'x', 'x', 'x'])) # 4
print(targetTerdekat(['x', ' ', ' ', ' ', 'x', 'x', 'o', ' '])) # 1
print(targetTerdekat([' ', ' ', 'o', ' '])) # 0
print(targetTerdekat([' ', 'o', ' ', 'x', 'x', ' ', ' ', 'x'])) # 2