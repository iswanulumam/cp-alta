def perkalianMatrix(m, n, p, mat1, mat2):
  result = []

  for i in range(m):
    result.append([])
    for j in range(p):
      sum = 0
      for k in range (n):
        sum += mat1[i][k] * mat2[k][j]
      result[i].append(str(sum))
  return result

m, n = map(int, input().split())
matrix1 = []
for i in range(m):
  l = list(map(int, input().split()))
  matrix1.append(l)

n, p = map(int, input().split())
matrix2 = []
for i in range(n):
  l = list(map(int, input().split()))
  matrix2.append(l)

# print(matrix1, matrix2)
result = perkalianMatrix(m, n, p, matrix1, matrix2)
for data in result:
  print(" ".join(data))