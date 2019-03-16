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



def asterik_tiga(N):
  for i in range(1, N + 1):
    list = []
    for j in range(1, i + 1):
      list.append(str(j))
    print(" ".join(list))

asterik_tiga(5)
'''
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5
'''



def asterik_empat(N):
  init = 1
  for i in range(1, N + 1):
    list = []
    for j in range(1, i + 1):
      list.append(str(init))
      init += 1
    print(" ".join(list))

asterik_empat(5)
'''
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
'''



def asterik_lima(N):
  for i in range(N - 1, -1, -1):
    list = []
    for j in range(1, N + 1):
      if j > i:
        list.append('*')
      else:
        list.append(' ')
    print("".join(list))

asterik_lima(5)
'''
    *
   **
  ***
 ****
*****
'''



# pascal triangle
def pascal(N):
  init = 1
  for i in range(1, N + 1):
    list = []
    for j in range(1, i + 1):
      list.append("*")
    print((" " * (N - i)) + (" ".join(list)))

pascal(5)
'''
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
'''



def asterik_enam(N):
  init_1 = 0
  init_2 = 1
  for i in range(1, N + 1):
    list = []
    for j in range(1, i + 1):
      list.append(str(init_1))
      sum_init = init_1 + init_2
      init_1 = init_2
      init_2 = sum_init
    print(" ".join(list))

asterik_enam(4)
'''
1
2 3
5 8 13
21 34 55 89
'''

asterik_enam(5)
'''
1
2 3
5 8 13
21 34 55 89
144 233 377 610 987
'''

asterik_enam(6)
'''
1
2 3
5 8 13
21 34 55 89
144 233 377 610 987
1597 2584 4181 6765 10946 17711
'''