def changeMe(arr) :
  if len(arr) == 0:
    print('')
  for i in range(0, len(arr)):
    print(f'{i + 1} {arr[i][0]} {arr[i][0]}:')
    myDic = {
      'firstName': 'invalid' if len(arr[i]) < 1 == None else arr[i][0],
      'lastName': 'invalid' if len(arr[i]) < 2 == None else arr[i][1],
      'gender': 'invalid' if len(arr[i]) < 3 == None else arr[i][2],
      'age': 'invalid' if len(arr[i]) < 4 else arr[i][3],
    }
    print(myDic)

# Driver Code
changeMe([['Christ', 'Evans', 'Male', 1982], ['Robert', 'Downey', 'Male']])
'''
1. Christ Evans:
{ firstName: 'Christ',
  lastName: 'Evans',
  gender: 'Male',
  age: 36 }
2. Robert Downey:
{ firstName: 'Robert',
  lastName: 'Downey',
  gender: 'Male',
  age: 'Invalid Birth Year' }
'''
changeMe([]) # ""