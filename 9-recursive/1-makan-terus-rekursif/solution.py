def makanTerusRekursif(waktu):
  if waktu > 15:
    return 1 + makanTerusRekursif(waktu - 15)
  elif waktu == 0:
    return 0
  else:
    return 1

# Driver Code
print(makanTerusRekursif(66)) # 5
print(makanTerusRekursif(100)) # 7
print(makanTerusRekursif(90)) # 6
print(makanTerusRekursif(10)) # 1
print(makanTerusRekursif(0)) # 0