n = int(input())

student_marks = {}

for _ in range(n):
  name, *line = input().split()
  scores = list(map(float, line))
  student_marks[name] = scores

query_name = input()

total_score = 0
for sm in student_marks[query_name]:
  total_score += sm

print("{0:.2f}".format(total_score / 3))

'''
input:
3
Krishna 67 68 69
Arjun 70 98 63
Malika 52 56 60
Malika

output:
56.00
'''