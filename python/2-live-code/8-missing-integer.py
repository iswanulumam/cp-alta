def missingInteger(array):
  number = [ False ] * 1000
  number[0] = True
  for a in array:
    if a > 0:
      number[a] = True
  for n in range(1, len(number)):
    if number[n] == False:
      return n

print(missingInteger([1, 2, 3, 4, 5])) # 6
print(missingInteger([0, -10, 1, 3, -20])) # 2
print(missingInteger([1, 3, 6, 4, 1, 2])) # 5
print(missingInteger([1, 2, 3])) # 4
print(missingInteger([-1, -3])) # 1