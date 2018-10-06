def drawThreeColsBox(height):
  counter = 0
  result = ''

  for _ in range(0, height):
    for _ in range(0, height):
      counter = counter + 1
      if counter % 3 == 0:
        result = result + '* '
      elif counter % 2 == 0:
        result = result + '$ '
      elif counter % 2 != 0:
        result = result + '@ '
    else:
      result = result + '\n'

  return result

# Driver Code
print(drawThreeColsBox(3))
'''
@ $ *
$ @ *
@ $ *
'''
print(drawThreeColsBox(5))
'''
@ $ * $ @
* @ $ * $
@ * @ $ *
$ @ * @ $
* $ @ * @
'''
print(drawThreeColsBox(1))
# @