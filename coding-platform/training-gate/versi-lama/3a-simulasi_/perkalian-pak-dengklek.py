def solve(bilSatu, bilDua):
  temp = bilDua
  result = 0
  while bilSatu != 0:
    lastNumSatu = bilSatu % 10
    bilSatu = bilSatu // 10
    bilDua = temp
    while bilDua != 0:
      lastNumDua = bilDua % 10
      result += lastNumSatu * lastNumDua
      bilDua = bilDua // 10
  return result

A, B = map(int, input().split())
print(solve(A, B))