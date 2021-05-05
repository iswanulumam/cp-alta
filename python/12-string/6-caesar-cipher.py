def caesarCipher(offset, string):
  new_string = ''
  for c in string:
    new_ascii = ord(c) + offset
    if c == ' ':
      new_string += ' '
    elif new_ascii > 122:
      new_string += chr(new_ascii - 26)
    else:
      new_string += chr(new_ascii)
  return new_string

print(caesarCipher(3, 'abc')); # def
print(caesarCipher(3, 'abc xyz')) # def abc
print(caesarCipher(1, 'abcdefghijklmnopqrstuvwxyz')) # bcdefghijklmnopqrstuvwxyza
print(caesarCipher(2, 'abcdefghijklmnopqrstuvwxyz')) # cdefghijklmnopqrstuvwxyzab
print(caesarCipher(3, 'abcdefghijklmnopqrstuvwxyz')) # defghijklmnopqrstuvwxyzabc
print(caesarCipher(4, 'abcdefghijklmnopqrstuvwxyz')) # efghijklmnopqrstuvwxyzabcd
print(caesarCipher(5, 'abcdefghijklmnopqrstuvwxyz')) # fghijklmnopqrstuvwxyzabcde
print(caesarCipher(26, 'abcdefghijklmnopqrstuvwxyz')) # abcdefghijklmnopqrstuvwxyz