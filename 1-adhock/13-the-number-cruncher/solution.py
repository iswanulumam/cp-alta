def multiplyTheOdds(arrOperand1, arrOperand2):
  if len(arrOperand1) == 0:
    return 0
  minValue = min(len(arrOperand1), len(arrOperand2))
  result = 1
  for i in range(0, minValue):
    mul = (arrOperand1[i] * arrOperand2[i])
    if mul % 2 != 0:
      result *= mul
  return result

print(multiplyTheOdds([3, 5, 2], [7, 5, 4])) # 525
print(multiplyTheOdds([1, 2], [1])) # 1
print(multiplyTheOdds([1, 2, 3, 2], [3, 5])) # 3
print(multiplyTheOdds([7, 5, 8, 3], [9, 1, 2, 5, 9, 2])) # 4725
print(multiplyTheOdds([], [])) # 0