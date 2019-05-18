def solve(arr):
  max_score = max(arr)
  sorted_arr = sorted(arr)
  secound_largest = None
  for i in range(len(sorted_arr)-1, -1, -1):
    if sorted_arr[i] < max_score:
      secound_largest = sorted_arr[i]
      break
  return secound_largest

n = int(input())
arr = list(map(int, input().split()))
print(solve(arr))