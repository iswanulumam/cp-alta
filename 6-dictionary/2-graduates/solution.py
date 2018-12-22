def graduates (students):
  if len(students) == 0:
    return {}
  
  classes = {}
  for student in students:
    key = student['class']
    if key in classes:
      if student['score'] > 75:
        classes[key].append({ 'name': student['name'], 'score': student['score'] })
    else:
      classes[key] = []
      if student['score'] > 75:
        classes[key].append({ 'name': student['name'], 'score': student['score'] })
  return classes 


print(graduates([])) # {}

print(graduates([
  {
    'name': 'Dimitri',
    'score': 90,
    'class': 'foxes'
  },
  {
    'name': 'Alexei',
    'score': 85,
    'class': 'wolves'
  },
  {
    'name': 'Sergei',
    'score': 74,
    'class': 'foxes'
  },
  {
    'name': 'Anastasia',
    'score': 78,
    'class': 'wolves'
  }
]))

'''
{
  foxes: [
    { name: 'Dimitri', score: 90 }
  ],
  wolves: [
    { name: 'Alexei' , score: 85 },
    { name: 'Anastasia', score: 78 }
  ]
}
'''

print(graduates([
  {
    'name': 'Alexander',
    'score': 100,
    'class': 'foxes'
  },
  {
    'name': 'Alisa',
    'score': 76,
    'class': 'wolves'
  },
  {
    'name': 'Vladimir',
    'score': 92,
    'class': 'foxes'
  },
  {
    'name': 'Albert',
    'score': 71,
    'class': 'wolves'
  },
  {
    'name': 'Viktor',
    'score': 80,
    'class': 'tigers'
  }
]))

'''
{
  foxes: [
    { name: 'Alexander', score: 100 },
    { name: 'Vladimir', score: 92 }
  ],
  wolves: [
    { name: 'Alisa', score: 76 },
  ],
  tigers: [
    { name: 'Viktor', score: 80 }
  ]
}
'''