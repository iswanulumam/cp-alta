def tentukanDeretGeometri(arr):
  # you can only write your code here!
  divider = arr[1] // arr[0]
  for i in range(1, len(arr)):
    if arr[i] != arr[i - 1] * divider:
      return False
  return True

# Driver Code
print(tentukanDeretGeometri([1, 3, 9, 27, 81])) # True
print(tentukanDeretGeometri([2, 4, 8, 16, 32])) # True
print(tentukanDeretGeometri([2, 4, 6, 8])) # False
print(tentukanDeretGeometri([2, 6, 18, 54])) # True
print(tentukanDeretGeometri([1, 2, 3, 4, 7, 9])) # False