def mostFrequentItem(arr) :
  mapper = {}
  for a in arr:
    key = a
    if key in mapper:
      mapper[key] += 1
    else:
      mapper[key] = 1
  
  items = []
  for m in mapper:
    items.append([m, mapper[m]])

  print(items)
  newItems =  sorted(items, key=lambda x: x[1])
  result = ''
  for n in newItems:
    result += n[0] + '(' + str(n[1]) + ') '
  return result

print(mostFrequentItem(['asus', 'asus', 'samsung', 'iphone', 'iphone', 'asus', 'asus'])) # 'samsung(1), iphone(2) , asus(4)'
print(mostFrequentItem(['9', 'b', 'b', 'c', '9', '9', 'b', '9', '2', '2'])) # 'c(1), 2(2), b(3) ,9(4)'
print(mostFrequentItem(['book', 'laptop', 'iPod'])) # 'book(1), laptop(1), iPod(1)'