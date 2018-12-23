def lostNumbers(a, b, c):
  result = [a, b, c]
  mini = min(a, b, c)
  maks = max(a, b, c)

  for i in range(mini, maks + 1):
    if i not in result:
      print(i)


lostNumbers(1, 3, 5)
# 2
# 4

lostNumbers(4, 6, 2)
# 3
# 5

lostNumbers(100, 108, 105)
# 101
# 102
# 103
# 104
# 106
# 107

lostNumbers(6, 5, 3)
# 4