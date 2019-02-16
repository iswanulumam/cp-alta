def xo(str):
  counter = 0
  for i in str:
    if i == 'o':
      counter = counter + 1
    elif i == 'x':
      counter = counter - 1
  
  if counter == 0:
    return True
  else:
    return False

print(xo('xoxoxo')) # True
print(xo('oxooxo')) # False
print(xo('oxo')) # False
print(xo('xxxooo')) # True
print(xo('xoxooxxo')) # True