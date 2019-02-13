def remove_string(str, ch):
  newstring = ''
  for j in range(len(str)):
    if str[j] == ch:
      newstring += str[j+1:]
      break
    newstring += str[j]
  return newstring

def string_acak(stringSatu, stringDua):
  for i in stringSatu:
    stringDua = remove_string(stringDua, i)
  if len(stringDua) > 0:
    return False
  return True

print(string_acak('malang', 'agmlan')) # True
print(string_acak('alterra', 'rerlata')) # True
print(string_acak('alterra', 'terlata')) # False
print(string_acak('python', 'nothyd')) # False
print(string_acak('python', 'nothyp')) # True