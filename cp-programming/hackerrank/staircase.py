def staircase(n):
  for i in range(n-1, -1, -1):
    line = ''
    for j in range(n):
      if j >= i:
        line += '#'
      else:
        line += ' '
    print(line)

staircase(6)
'''
     #
    ##
   ###
  ####
 #####
######
'''