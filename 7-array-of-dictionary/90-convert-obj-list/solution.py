def convertObjectToList(obj):
  result = []
  for key in obj:
    result.append([key, obj[key]])
  return result

print(convertObjectToList({
  'name': 'Holly',
  'age': 35,
  'role': 'producer'
}))
# [['name', 'Holly'], ['age', 35], ['role', 'producer']]