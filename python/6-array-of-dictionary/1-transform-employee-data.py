def transformEmployeeData(array):
  result = []
  for a in array:
    mapper = {}
    for item in a:
      key = item[0]
      mapper[key] = item[1]
    result.append(mapper)
  return result

print(transformEmployeeData([
    [
        ['firstName', 'Joe'], ['lastName', 'Blow'], ['age', 42], ['role', 'clerk']
    ],
    [
        ['firstName', 'Mary'], ['lastName', 'Jenkins'], ['age', 36], ['role', 'manager']
    ]
]))

'''
[
    {firstName: 'Joe', lastName: 'Blow', age: 42, role: 'clerk'},
    {firstName: 'Mary', lastName: 'Jenkins', age: 36, role: 'manager'}
]
'''