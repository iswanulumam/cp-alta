def checkUnik(bilangan):
  faktor = [2, 3, 5]
  divider = 0

  while True:    
    if bilangan % faktor[divider] == 0:
      bilangan = bilangan // faktor[divider]
    else:
      divider = divider + 1  
    if bilangan == 1:
      return True
    elif divider == 3:
      return False

def bilanganUnik(N):
  unik = []
  for i in range(1, N + 1):
    if checkUnik(i):
      unik.append(i)
  return unik

# Driver Code
print(bilanganUnik(10)) # Output: 2 3 4 5 6 8 9 10
print(bilanganUnik(20)) # Output: 2 3 4 5 6 8 9 10 12 15 16 18 20

