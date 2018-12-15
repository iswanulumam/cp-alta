import re

def hapusSimbol(str) :
  # you can only write your code here!
  return re.sub(r'[^\w]', '', str)

# Driver Code
print(hapusSimbol('test%$4aa')) # test4aa
print(hapusSimbol('devel0p3r s3j@@ati')) # devel0p3rs3jati
print(hapusSimbol('ma@#k!an~')) # makan
print(hapusSimbol('coding')) # coding
print(hapusSimbol('1+3-5*2=100')) # 1352100