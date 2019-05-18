def tentukanDeretAritmatika(arr):
  diff = abs(arr[0] - arr[1])
  for i in range(1, len(arr)):
    if abs(arr[i] - arr[i - 1]) != diff:
      return False
  return True

# Driver Code
print(tentukanDeretAritmatika([1, 2, 3, 4, 5, 6])) # True
print(tentukanDeretAritmatika([2, 4, 6, 12, 24])) # False
print(tentukanDeretAritmatika([2, 4, 6, 8])) # True
print(tentukanDeretAritmatika([2, 6, 18, 54])) # False
print(tentukanDeretAritmatika([1, 2, 3, 4, 7, 9])) # False