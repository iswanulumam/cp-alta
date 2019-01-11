def initialGroupingDescending(studentsArr) :
  
  sorted_students = sorted(studentsArr)
  result = []
  mark = sorted_students[0][0]

  grouped = []

  for student in sorted_students:
    if student[0] == mark:
      if len(grouped) == 0:
        grouped.append(mark)
      grouped.append(student)
    else:
      result.append(grouped)
      grouped = []
      mark = student[0]
      if len(grouped) == 0:
        grouped.append(mark)
      grouped.append(student)
  
  result.append(grouped)
  return result


print(initialGroupingDescending(['Budi', 'Badu', 'Joni', 'Jono']))
'''
[
[ 'J', 'Joni', 'Jono' ],
[ 'B', 'Budi', 'Badu' ]
]
'''

print(initialGroupingDescending(['Mickey', 'Yusuf', 'Donald', 'Ali', 'Gong']))
'''
[
[ 'Y', 'Yusuf' ],
[ 'M', 'Mickey' ],
[ 'G', 'Gong' ],
[ 'D', 'Donald' ],
[ 'A', 'Ali' ]
]
'''

# print(initialGroupingDescending(['Rock', 'Stone', 'Brick', 'Rocker', 'Sticker']))
'''
[
[ 'S', 'Stone', 'Sticker' ],
[ 'R', 'Rock', 'Rocker' ],
[ 'B', 'Brick' ]
]
'''