def uniqueFinder(sentence) :
  if sentence == '':
    return 'NO WORDS'
  
  result = []
  mapper = {}
  words = sentence.split(' ')
  
  for word in words:
    key = word.lower()
    if key not in mapper:
      result.append(key)
      mapper[key] = True
  return result


print(uniqueFinder('hello black dragon and hello red dragon')) # ['hello', 'black', 'dragon', 'and', 'red']
print(uniqueFinder('hello HELLo hEllO hlloe')) # ['hello', 'hlloe']
print(uniqueFinder('john is coding and he is coding')) # ['john', 'is', 'coding', 'and', 'he']
print(uniqueFinder('blue blue red blue violet red violet')) # ['blue', 'red', 'violet']
print(uniqueFinder('')) # 'NO WORDS'