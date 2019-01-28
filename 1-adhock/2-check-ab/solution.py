def checkAB(str):
  ab = [[], []]

  for i in range(0, len(str)):
    if str[i] == 'a':
      ab[0].append(i)
    elif str[i] == 'b':
      ab[1].append(i)

  for i in ab[0]:
    for j in ab[1]:
      if abs(i - j) == 4:
        return True
  return False

# Driver Code
print(checkAB('lane borrowed')) # True
print(checkAB('i am sick')) # False
print(checkAB('you are boring')) # True
print(checkAB('barbarian')) # True
print(checkAB('bacon and meat')) # False