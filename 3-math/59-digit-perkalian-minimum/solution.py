def digitPerkalianMinimum(angka):
  # you can only write your code here!
  result = 0
  minValue = 999
  for i in range(1, angka + 1):
    if angka % i == 0:
      lengStr = str(i) + str(angka // i)
      if len(lengStr) < minValue:
        result = len(lengStr)
        minValue = len(lengStr)
  return result
      
# Driver Code
print(digitPerkalianMinimum(24)) # 2
print(digitPerkalianMinimum(90)) # 3
print(digitPerkalianMinimum(20)) # 2
print(digitPerkalianMinimum(179)) # 4
print(digitPerkalianMinimum(1)) # 2 