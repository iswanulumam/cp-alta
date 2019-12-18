def median(N, array):
  array.sort()
  mid = N // 2

  if N % 2 == 0:
    result = (array[mid] + array[mid - 1]) / 2
    return "{:.2f}".format(result)
  else:
    return array[mid]

N = int(input())
array = list(map(float, input().split()))
print(median(N, array))