def draw():
  for i in range(1, 9):
    result = []
    for j in range(1, 9):
      if (i % 2 != 0 and j % 2 == 0) or (i % 2 == 0 and j % 2 != 0):
        result.append("#")
      else:
        result.append(" ")
    print(''.join(result))

draw()
'''
 # # # #
# # # # 
 # # # #
# # # # 
 # # # #
# # # # 
 # # # #
# # # #
'''