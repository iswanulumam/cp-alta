
def asterik_lima(N):
  for i in range(N - 1, -1, -1):
    list = []
    for j in range(1, N + 1):
      if j > i:
        list.append('*')
      else:
        list.append(' ')
    print("".join(list))

N = int(input())
asterik_lima(N)