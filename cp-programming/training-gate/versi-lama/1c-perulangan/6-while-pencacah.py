import sys 

# sys.stdin = open('input.txt', 'r')

total = 0

while True:
  try:
      s = int(input())
      total = total + s
  except EOFError:
      break

print(total)