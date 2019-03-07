def generateBorderBox(N):
  mid = N // 2 + 1
  print(mid)
  for i in range(1, N + 1):
    line = ''
    for j in range(1, N + 1):
      # star in middle
      if i == mid and j == mid:
        line += '*'
      elif (i == 1) or (i == N) or (j == 1) or (j == N):
        line += 'I'
      elif ((i == 3) or (i == N - 2)) and j != 2 and j != N-1:
        line += 'I'
      elif ((j == 3) or (j == N - 2)) and i != 2 and i != N-1:
        line += 'I'
      else:
        line += ' '
    print(line)

generateBorderBox(9)
'''
IIIIIIIII
I       I
I IIIII I
I I   I I
I I * I I
I I   I I
I IIIII I
I       I
IIIIIIIII
'''
generateBorderBox(13)
'''
IIIIIIIIIIIII
I           I
I IIIIIIIII I
I I       I I
I I       I I
I I       I I
I I   *   I I
I I       I I
I I       I I
I I       I I
I IIIIIIIII I
I           I
IIIIIIIIIIIII
'''