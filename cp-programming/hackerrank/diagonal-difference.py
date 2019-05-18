def diagonalDifference(arr):
  diagonal_a = 0
  diagonal_b = 0
  idx_col = len(arr) - 1

  for i, a in enumerate(arr):
    diagonal_a += arr[i][i]
    diagonal_b += arr[i][idx_col]
    idx_col -= 1
  
  return abs(diagonal_a - diagonal_b)

print(diagonalDifference([
  [11, 2, 4],
  [4, 5, 6],
  [10, 8, -12]
])) # 15

print(diagonalDifference([
  [-1,  1,  -7, -8],
  [-10, -8, -5, -2],
  [0,   9,   7,  -1],
  [4,   4,  -2,  1]
])) # 1
