def faktorial(n):
  if n == 1:
    return 1
  else:
    return n * faktorial(n - 1)

print(faktorial(7)) # 5040
print(faktorial(8)) # 40320
print(faktorial(9)) # 362880
print(faktorial(10)) # 3628800
print(faktorial(12)) # 479001600