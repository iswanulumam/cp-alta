def solve(op, A, B):
  opr = ['<', '>', '=']
  math = ['+', '-', '*']
  
  if op in math:
    if op == '-':
      return A - B
    if op == '+':
      return A + B
    if op == '*':
      return A * B
  
  if op in opr:
    if op == '>':
      if A > B:
        return 'benar'
      else:
        return 'salah'
    if op == '<':
      if A < B:
        return 'benar'
      else:
        return 'salah'
    if op == '=':
      if A == B:
        return 'benar'
      else:
        return 'salah'

A, op, B = input().split()
print(solve(op, int(A), int(B)))