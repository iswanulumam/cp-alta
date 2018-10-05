def konversiMenit(menit):
  a = str(menit // 60)
  b = str(menit % 60)
  return a + ':' + (b if len(b) > 1 else '0' + b)

print(konversiMenit(63)) # 1:03
print(konversiMenit(124)) # 2:04
print(konversiMenit(53)) # 0:53
print(konversiMenit(88)) # 1:28
print(konversiMenit(120)) # 2:00