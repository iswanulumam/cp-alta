def checkAnyNum(S):
  for c in S:
    if c.isalnum():
      return True
  return False

def checkAnyAlpha(S):
  for c in S:
    if c.isalpha():
      return True
  return False

def checkAnyDigit(S):
  for c in S:
    if c.isdigit():
      return True
  return False

def checkAnyLower(S):
  for c in S:
    if c.islower():
      return True
  return False

def checkAnyUpper(S):
  for c in S:
    if c.isupper():
      return True
  return False

S = input()
print(checkAnyNum(S))
print(checkAnyAlpha(S))
print(checkAnyDigit(S))
print(checkAnyLower(S))
print(checkAnyUpper(S))