def modus(array):
  mapper = {}

  maxval = 0
  maxkey = -1  

  for a in array:
    key = a
    if key in mapper:
      mapper[key] += 1
    else:
      mapper[key] = 1
  
  for m in mapper:
    if mapper[m] >= maxval:
      maxval = mapper[m]
      maxkey = m
  
  return maxkey

'''
def modusTerbesar(array):
  v = [0] * 100001
  for a in array:
    v[a] += 1
  
  maxval = 0
  maxidx = -1

  for i in range(len(v)):
    if v[i] >= maxval:
      maxval = v[i]
      maxidx = i
  
  return maxidx
'''

N = int(input())

list = []
for i in range(0, N):
  bil = int(input())
  list.append(bil)

print(modus(list))

