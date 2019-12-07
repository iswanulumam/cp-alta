def checkAB(str):
  position_a = []
  position_b = []

  for i in range(0, len(str)):
    if str[i] == 'a':
      position_a.append(i)
    elif str[i] == 'b':
      position_b.append(i)

  for i in position_a:
    for j in position_b:
      if abs(i - j) == 4:
        return True
  return False

# Driver Code
print(checkAB('lane borrowed')) # True
print(checkAB('i am sick')) # False
print(checkAB('you are boring')) # True
print(checkAB('barbarian')) # True
print(checkAB('bacon and meat')) # False