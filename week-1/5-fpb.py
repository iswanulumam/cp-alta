def fpb(a, b):
  # your code here
  maxValue = max(a, b)
  for i in range(maxValue, 0, -1):
    if a % i == 0 and b % i == 0:
      return i

print(fpb(12, 16)) # 4
print(fpb(50, 40)) # 10
print(fpb(22, 99)) # 11
print(fpb(24, 36)) # 12
print(fpb(17, 23)) # 1