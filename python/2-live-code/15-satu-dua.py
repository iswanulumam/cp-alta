
def angkaSatuDua(numbers):
  after_one = []
  for index in range(len(numbers)):
    if numbers[index] == 1:
      after_one.append(numbers[index + 1])

  counter_ao = 0
  for index in range(len(numbers)):
    if numbers[index] == 2:
      numbers[index] = after_one[counter_ao]
      counter_ao += 1
    
  for index in range(len(numbers)):
    if numbers[index] == 1:
      numbers[index + 1] = 2

  return numbers

print(angkaSatuDua([2, 1, 3, 1, 6, 2])) # [3, 1, 2, 1, 2, 6]
print(angkaSatuDua([4, 1, 4, 2])) # [4, 1, 2, 4]
print(angkaSatuDua([7, 1, 8, 2, 2, 1, 3])) # [7, 1, 2, 8, 3, 1, 2]
print(angkaSatuDua([1, 7, 8, 2, 2, 1, 5])) # [1, 2, 8, 7, 5, 1, 2]
print(angkaSatuDua([1, 5, 3, 4, 2, 6, 7])) # [1, 2, 3, 4, 5, 6, 7]