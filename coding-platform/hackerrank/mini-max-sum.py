def miniMaxSum(arr):
  total_sum = 0
  for a in arr:
    total_sum += a
  max_sum = -999999999999
  min_sum = 999999999999
  for a in arr:
      temp_max = total_sum - a
      temp_min = total_sum - a
      if temp_max > max_sum:
        max_sum = temp_max
      if temp_min < min_sum:
        min_sum = temp_min
  print(f'{min_sum} {max_sum}')

miniMaxSum([1, 2, 3, 4, 5]) # 10 14
miniMaxSum([7, 69, 2, 221, 8974]) # 299 9271