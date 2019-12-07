# selection sort
def sorting(arrNumber):
  for i in range(len(arrNumber)):
    min_idx = i
    for j in range(i + 1, len(arrNumber)):
      if arrNumber[min_idx] > arrNumber[j]:
        min_idx = j
    arrNumber[i], arrNumber[min_idx] = arrNumber[min_idx], arrNumber[i]
  return arrNumber

def getTotal(arrNumber):
  mapper = {}
  maxvalue = -999
  for arr in arrNumber:
    key = arr
    if key in mapper:
      mapper[key] += 1
      if key > maxvalue:
        maxvalue = key
    else:
      mapper[key] = 1
      if key > maxvalue:
        maxvalue = key

  return maxvalue, mapper[maxvalue]

def mostFrequentLargestNumbers(arrNumber):
  listSort = sorting(arrNumber)
  countHighest = getTotal(listSort)
  return countHighest

print(mostFrequentLargestNumbers([2, 8, 4, 6, 8, 5, 8, 4]))
# 'angka paling besar adalah 8 dan jumlah kemunculan sebanyak 3 kali'

print(mostFrequentLargestNumbers([122, 122, 130, 100, 135, 100, 135, 150]))
# 'angka paling besar adalah 150 dan jumlah kemunculan sebanyak 1 kali'

print(mostFrequentLargestNumbers([1, 1, 1, 1]))
# 'angka paling besar adalah 1 dan jumlah kemunculan sebanyak 4 kali'

# print(mostFrequentLargestNumbers([]))
# ' '