# 1 p.m - 1.40 p.m
def maxDifference_(a):
  reversed_list = list(reversed(a))
  max_result = -9999999999
  for idx, _ in enumerate(reversed_list):
      temp = reversed_list[idx:]
      marked_val = temp[0]
      for idx_temp in range(1, len(temp)):
          diff_val = marked_val - temp[idx_temp]
          if diff_val > max_result:
              max_result = diff_val
  return max_result

def maxDifference(a):
  max_diff = -9999999999
  for idx_a in range(len(a)-1, -1, -1):
    temp = a[:idx_a]
    marked_val = a[idx_a]
    for idx_temp in range(len(temp)):
      diff_val = marked_val - temp[idx_temp]
      if diff_val > max_diff:
        max_diff = diff_val
  return max_diff 

def maxDifference2(a):
  max_diff = -1
  for idx_a in range(len(a)-1, -1, -1):
    marked_val = a[idx_a]
    for idx_temp in range(idx_a):
      if marked_val > a[idx_temp]:
        diff_val = marked_val - a[idx_temp]
        if diff_val > max_diff:
          max_diff = diff_val
  return max_diff

def maxDifference3(a):
  max_diff = -1
  
  sub_a = []
  for item_a in a:
    current_val = item_a
    sub_a.append(item_a)
    for item_sub_a in sub_a:
      if current_val > item_sub_a:
        diff_val = current_val - item_sub_a
        if diff_val > max_diff:
          max_diff = diff_val
  return max_diff
  
print(maxDifference3([10, 8, 7, 6, 5])) # -1
print(maxDifference3([1, 2, 6, 4])) # 5
print(maxDifference3([2, 3, 10, 2, 4, 8, 1])) # 8
print(maxDifference3([7, 9, 5, 6, 3, 2])) # 2
print(maxDifference3([2, 3, 10, 2, 4, 8, 1])) # 8
