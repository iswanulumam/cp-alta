# naive solution
def sum_pairs(list, sum):
  for i in range(0, len(list)):
    for j in range(i + 1, len(list)):
      if list[i] + list[j] == sum:
        return [list[i], list[j]]
  return 'No Match'

# linier solution
def linier_solution(list, sum):
  hashTable = {}

  for i in range(0, len(list)):
    sum_minus_elem = sum - list[i]

    key = sum_minus_elem
    if key in hashTable:
      return [sum_minus_elem, list[i]]

    hashTable[list[i]] = list[i]
  
  return 'No Match'

print(linier_solution([1, 4, 8, 7, 3, 15], 8)) # [1, 7]
print(linier_solution([1, -2, 3, 0, -6, 1], -6)) # [0, -6]
print(linier_solution([20, -13, 40], -7)) # No Match
print(linier_solution([1, 2, 3, 4, 1, 0], 2)) # [1, 1]
print(linier_solution([10, 5, 2, 3, 7, 5], 10)) # [3, 7]
print(linier_solution([4, -2, 3, 3, 4], 8)) # [4, 4]
print(linier_solution([0, 2, 0], 0)) # [0, 0]
print(linier_solution([5, 9, 13, -3], 10)) # [13, -3]