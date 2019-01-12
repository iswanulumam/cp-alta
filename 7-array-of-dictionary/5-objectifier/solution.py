from six import string_types

def objectifier(data):
  result = {}
  for list in data:
    # print('>>>>>', list[1])
    result[list[0]] = {}

    for i in range(0, len(list[1])):
      dataList = list[1][i]
      if isinstance(dataList, string_types):
        result[list[0]][dataList] = list[1][i + 1]
  
  return result

data = [
  [ 'animals',
    [
      'dogs', ['Corgi', 'Sheltie'],
      'cats', ['Tabby','Black'],
      'pigs', ['Teacup']
    ]
  ],
  [ 'guitars',
    [
      'Fender', ['Telecaster', 'Stratocaster','Jazzmaster'],
      'Gibson', ["Gibson Flying-V", 'Firebird', 'Les Paul']
    ]
  ]
]

print(objectifier(data))
'''
{
  animals : {
    dogs : ['Corgi', 'Sheltie'],
    cats : ['Tabby','Black'],
    pigs : ['Teacup']
},
  guitars : {
    Fender : ['Telecaster', 'Stratocaster','Jazzmaster'],
    Gibson : ["Gibson Flying-V", 'Firebird', 'Les Paul']
  }
}\
'''