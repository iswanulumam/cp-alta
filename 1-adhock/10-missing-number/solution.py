def findMax(list):
  max_value = None
  for l in list:
    if max_value == None:
      max_value = l
    if l > max_value:
      max_value = l
  return max_value

def findMin(list):
  min_value = None
  for l in list:
    if min_value == None:
      min_value = l
    if l < min_value:
      min_value = l
  return min_value

def missingNumbers(numbers):
  if len(numbers) == 0:
    return []

  max_number = findMax(numbers)
  min_number = findMin(numbers)
  mapper_numbers = {}
  result_missing_num = []

  for number in numbers:
    mapper_numbers[number] = True
  
  for i in range(min_number + 1, max_number):
    if i not in mapper_numbers:
      result_missing_num.append(i)
  
  return result_missing_num

print(missingNumbers([1, 5, 10, 7, 6]))
# [2, 3, 4, 8, 9]
print(missingNumbers([10, 1]))
# [2, 3, 4, 5, 6, 7, 8, 9]
print(missingNumbers([90, 92, 91]))
# []
print(missingNumbers([60, 54, 50]))
# [51, 52, 53, 55, 56, 57, 58, 59]
print(missingNumbers([]))
# []