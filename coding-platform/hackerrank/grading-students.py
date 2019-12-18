def gradingStudents(grades):
  final_grade = []
  addition = [1, 1]
  for grade in grades:
    if grade > 37:
      if grade % 5 == 0:
        final_grade.append(grade)
      else:
        newGrage = grade
        for add in addition:
          grade += add
          if grade % 5 == 0:
            newGrage =  grade
        final_grade.append(newGrage)
    else:
      final_grade.append(grade)
  return final_grade

print(gradingStudents([73, 67, 38, 33]))
'''
75
67
40
33
'''