data = []
while True:
  try:
      s = int(input())
      data.append(s)
  except EOFError:
      break

for i in range(len(data) -1, -1, -1):
  print(data[i])