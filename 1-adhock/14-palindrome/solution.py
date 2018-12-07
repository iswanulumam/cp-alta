def palindrome(kata):
  reverse = ''
  for i in range(len(kata)-1, -1, -1):
    reverse += kata[i]
  
  return True if reverse == kata else False

# Drive Code
print(palindrome('katak')) # True
print(palindrome('blanket')) # False
print(palindrome('civic')) # True
print(palindrome('kasur rusak')) # True
print(palindrome('mister')) # False