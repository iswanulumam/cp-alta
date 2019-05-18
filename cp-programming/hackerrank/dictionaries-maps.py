n = int(input())

phoneBook = {}
for i in range(n):
  name, number = input().split()
  phoneBook[name] = number

while True:
  try:
    search = input()
    if search in phoneBook:
      print(f'{search}={phoneBook[search]}')
    else:
      print('Not found')
  except:
    break

'''
input:
3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry

output:
sam=99912222
Not found
harry=12299933
'''