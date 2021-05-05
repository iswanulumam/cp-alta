def getReports(studentGrades):
  
  reports = {}

  for grade in studentGrades:
    key = grade['classCode']
    obj = {
      'classCode': key,
      'failed': [],
      'success': [],
    }
    if key not in reports:
      reports[key] = obj
      if grade['score'] >= 70:
        reports[key]['success'].append(grade['name'])
      else:
        reports[key]['failed'].append(grade['name'])
    else:
      if grade['score'] >= 70:
        reports[key]['success'].append(grade['name'])
      else:
        reports[key]['failed'].append(grade['name'])
  
  result = []
  for key_report in reports:
    result.append(reports[key_report])
  
  return result


grades1 = [
  { 'name': 'John', 'score': 80, 'classCode': 'A' },
  { 'name': 'Mike', 'score': 60, 'classCode': 'B' },
  { 'name': 'Budi', 'score': 70, 'classCode': 'C' },
  { 'name': 'Siti', 'score': 50, 'classCode': 'A' },
  { 'name': 'Aaron', 'score': 10, 'classCode': 'A' },
  { 'name': 'Arthur', 'score': 10, 'classCode': 'C' },
  { 'name': 'Osass', 'score': 10, 'classCode': 'B' },
  { 'name': 'Yolo', 'score': 90, 'classCode': 'C' },
]

print(getReports(grades1))
'''
[
  {
    classCode: 'A',
    passed: [ 'John' ],
    failed: [ 'Siti', 'Aaron' ]
  },
  {
    classCode: 'B',
    passed: [],
    failed: [ 'Mike', 'Osass' ]
  },
  {
    classCode: 'C',
    passed: [ 'Budi', 'Yolo' ],
    failed: [ 'Arthur' ]
  },
]
'''