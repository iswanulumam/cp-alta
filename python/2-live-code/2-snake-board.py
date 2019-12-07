def generateSnake(row, column):
  if row == 0 and column == 0:
    print('row atau column minimal harus 1')
  if row == 1 and column == 1:
    print('o')
  
  for i in range(1, row + 1):
    line = ''
    for j in range(1, column + 1):
      if i == 1 and j == 1:
        line += '~'
      elif i == row and j == column and row % 2 != 0:
        line += 'o'
      elif i == row and j == 1 and row % 2 == 0:
        line += 'o'
      elif i % 2 == 0 and j == column:
        line += '|'
      elif i % 2 != 0 and j == 1:
        line += '|'
      else:
        line += '_'
    print(line)

generateSnake(6, 10)
'''
~_________
_________|
|_________
_________|
|_________
o________|
'''

print()
generateSnake(1, 30)
'''
~____________________________o
'''

print()
generateSnake(3, 20)
'''
~___________________
___________________|
|__________________o
'''

print()
generateSnake(1, 1)
'''
o
'''

print()
generateSnake(0, 0)
'''
row atau column minimal harus 1
'''