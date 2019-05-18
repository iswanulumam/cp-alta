def plusMinus(arr):
  total_positive = 0
  total_negative = 0
  total_zero = 0
  
  for a in arr:
    if a < 0:
      total_negative += 1
    elif a == 0:
      total_zero += 1
    elif a > 0:
      total_positive += 1
  
  total_arr = len(arr)
  print("{0:.6f}".format(total_positive / total_arr))
  print("{0:.6f}".format(total_negative / total_arr))
  print("{0:.6f}".format(total_zero / total_arr))

plusMinus([-4, 3, -9, 0, 4, 1])
'''
0.500000
0.333333
0.166667
'''