def fromListToObject(array):
  newObj = {}
  for a in array:
    key = a[0]
    newObj[key] = a[1]
  return newObj

print(fromListToObject([['make', 'Ford'], ['model', 'Mustang'], ['year', 1964]]))
'''
{
  make : 'Ford'
  model : 'Mustang',
  year : 1964
}
'''