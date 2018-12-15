def virusCheck(str):
  str = str.lower()
  total = 0
  for s in str:
    if s == 'x' or s == 'y' or s == 'z':
      total += 1
  return total

print(virusCheck('qlD4MZax0raQqew')) # 2 viruses detected
print(virusCheck('HH0NBP1zRa')) # 1 virus detected
print(virusCheck('4O4TmIF6ONaiMlzpXxPqwy')) # 4 viruses detected
print(virusCheck('mjBgPlzks')) # 1 virus detected
print(virusCheck('AIn4Ks05bBaa')) # No virus detected
print(virusCheck('RsMFjBUjvIaP')) # No virus detected
print(virusCheck('')) # No virus detected