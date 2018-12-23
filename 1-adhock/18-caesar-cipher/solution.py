def caesarCipher(offset, string):
  pass

print(caesarCipher(3, 'abc')); # def
print(caesarCipher(3, 'abc xyz')) # def abc
print(caesarCipher(1, 'abcdefghijklmnopqrstuvwxyz')) # bcdefghijklmnopqrstuvwxyza
print(caesarCipher(2, 'abcdefghijklmnopqrstuvwxyz')) # cdefghijklmnopqrstuvwxyzab
print(caesarCipher(3, 'abcdefghijklmnopqrstuvwxyz')) # defghijklmnopqrstuvwxyzabc
print(caesarCipher(4, 'abcdefghijklmnopqrstuvwxyz')) # efghijklmnopqrstuvwxyzabcd
print(caesarCipher(5, 'abcdefghijklmnopqrstuvwxyz')) # fghijklmnopqrstuvwxyzabcde
print(caesarCipher(26, 'abcdefghijklmnopqrstuvwxyz')) # abcdefghijklmnopqrstuvwxyz