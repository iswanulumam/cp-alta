def numbersDivider(num) :
  totalGanjil = 0
  faktor = []

  for i in range(num, 0, -1):
    if num % i == 0:
      faktor.append(i)
      if i % 2 != 0:
        totalGanjil += i

  return [faktor, totalGanjil]

print(numbersDivider(6)) # [ [6, 3, 2, 1], 4 ]
print(numbersDivider(8)) # [ [8, 4, 2, 1], 1 ]
print(numbersDivider(13)) # [ [13, 1], 14 ]