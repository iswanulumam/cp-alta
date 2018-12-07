def asterik_satu(N):
  for i in range(1, N + 1):
    list = []
    for j in range(1, i + 1):
      list.append("*")
    print(" ".join(list))

asterik_satu(5)
'''
* 
* * 
* * * 
* * * * 
* * * * *
'''

def asterik_dua(N):
  for i in range(1, N + 1):
    list = []
    for j in range(1, i + 1):
      list.append("*")
    print((" " * (N - i)) + (" ".join(list)))

asterik_dua(5)
'''
* 
* * 
* * * 
* * * * 
* * * * *
'''

