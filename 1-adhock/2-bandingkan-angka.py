def bandingkanAngka(a, b):
  if a > b:
    return False
  elif b > a:
    return True
  else:
    return -1

# Driver Code
print(bandingkanAngka(5, 8)) # True
print(bandingkanAngka(5, 3)) # False
print(bandingkanAngka(4, 4)) # -1
print(bandingkanAngka(3, 3)) # -1
print(bandingkanAngka(17, 2)) # False