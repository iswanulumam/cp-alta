
import sys 

# sys.stdin = open('input.txt', 'r')

list = []

while True:
  try:
      s = input()
      list.append(s)
  except EOFError:
    list.reverse()
    for l in list:
      print(l)
    break