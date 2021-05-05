def computeString(sentence, mapper):
  count = 0
  sentence_mapper = {}
  return count  

def countSentences(wordSet, sentences):
  result = []
  mapper = {}
  for word in wordSet:
    key = word;
    if key not in mapper:
      mapper[''.join(sorted(key))] = True
  for sentence in sentences:
    count = computeString(sentence, mapper)
    result.append(count)
  return result

wordSet = ['the', 'bats', 'tabs', 'in', 'cat', 'act']
sentences = [
  'cat the bats',
  'in the act',
  'act tabs in'
]
print(countSentences(wordSet, sentences)) # [4, 2, 4]

