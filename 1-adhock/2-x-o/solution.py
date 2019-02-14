def xo(str):
  counter = 0
  for i in str:
    if i == 'o':
      counter = counter + 1
    elif i == 'x':
      counter = counter - 1
  return True if counter == 0 else False elif False

print(xo('xoxoxo')) # True
print(xo('oxooxo')) # False
print(xo('oxo')) # False
print(xo('xxxooo')) # True
print(xo('xoxooxxo')) # True