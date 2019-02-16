def split_string(string):
  word = ''
  split_string = []
  for index, char in enumerate(string):
    if char == ' ':
      split_string.append(word)
      word = ''
    else:
      word += char
    if index == len(string) - 1:
      split_string.append(word)
  return split_string

def uniqueFinder(sentence) :
  if sentence == '':
    return 'NO WORDS'
  result = []
  mapper = {}
  words = split_string(sentence)
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