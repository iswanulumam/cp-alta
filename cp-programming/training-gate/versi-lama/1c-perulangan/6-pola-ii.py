def pula2(N):
  init = 0
  for i in range(1, N + 1):
    list = []
    for j in range(1, i + 1):
      list.append(str(init))
      if init == 9:
        init = 0
      else:
        init += 1
    print("".join(list))

N = int(input())
pula2(N)
'''
0
12
345
6789
01234
567890
1234567
'''