def bilanganTerbesarTiga(a, b, c):
  maks = a
  if b > maks:
    maks = b
  if c > maks:
    maks = c 
  return maks

print(bilanganTerbesarTiga(1, 2, 3)) # 3
print(bilanganTerbesarTiga(10, 30, 20)) # 30
print(bilanganTerbesarTiga(17, 15, 17)) # 17
print(bilanganTerbesarTiga(79, 50, 20)) # 79
print(bilanganTerbesarTiga(200, 300, 400)) # 400