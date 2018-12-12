def faktorBilangan(value):
  for i in range(1, value + 1):
    if value % i == 0:
      print(i, end=' ')
  print('')

faktorBilangan(6) # 1 2 3 6
faktorBilangan(12) # 1 2 3 4 6 12