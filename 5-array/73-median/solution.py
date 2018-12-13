def cariMedian(arr) :
  if len(arr) % 2 != 0:
    return arr[len(arr) // 2]
  else:
    result = (arr[len(arr) // 2 - 1] + arr[len(arr) // 2]) / 2
    if (result).is_integer():
      return int(result)
    else:
      return result

# Driver Code
print(cariMedian((1, 2, 3, 4, 5))) # 3
print(cariMedian((1, 3, 4, 10, 12, 13))) # 7
print(cariMedian((3, 4, 7, 6, 10))) # 7
print(cariMedian((1, 3, 3))) # 3
print(cariMedian((7, 7, 8, 8))) # 7.5