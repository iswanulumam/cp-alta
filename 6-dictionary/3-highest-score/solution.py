def highestScore (students):
  if len(students) == 0:
    return {}
  
  classes = {}
  max_score = -999
  for student in students:
    key = student['class']
    if key in classes:
      if classes[key]['score'] > max_score:
        classes[key] = { 'name': student['name'], 'score': student['score'] }
    else:
      classes[key] = { 'name': student['name'], 'score': student['score'] }
      max_score = student['score']
  return classes

print(highestScore([])) # {}

print(highestScore([
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
    'score': 100,
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
  foxes: { 'name': 'Dimitri', 'score': 90 },
  wolves: { 'name': 'Alexei', 'score': 85 }
}
'''

print(highestScore([
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
  foxes: { 'name': 'Alexander', 'score': 100 },
  wolves: { 'name': 'Alisa', 'score': 76 },
  tigers: { 'name': 'Viktor', 'score': 80 }
}
'''