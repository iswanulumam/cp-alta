N = int(input())
base_list = []

for i in range(N):
  line = input().split()
  key = line[0]
  if key == 'insert':
    base_list.insert(int(line[1]), int(line[2]))
  elif key == 'print':
    print(base_list)
  elif key == 'remove':
    base_list.remove(int(line[1]))
  elif key == 'append':
    base_list.append(int(line[1]))
  elif key == 'sort':
    base_list.sort()
  elif key == 'pop':
    base_list.pop()
  elif key == 'reverse':
    base_list = base_list[::-1]

'''
input:
12
insert 0 5
insert 1 10
insert 0 6
print
remove 6
append 9
append 1
sort
print
pop
reverse
print

output:
[6, 5, 10]
[1, 5, 9, 10]
[9, 5, 1]
'''