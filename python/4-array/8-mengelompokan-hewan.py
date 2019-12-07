def groupAnimals(animals):
  sorted_animal = sorted(animals)
  result = []
  mark = sorted_animal[0][0]

  grouped = []
  for sa in sorted_animal:
    if sa[0] == mark:
      grouped.append(sa)
    else:
      result.append(grouped)
      grouped = []
      grouped.append(sa)
      mark = sa[0]
  result.append(grouped)
  return result

# Driver Code
print(groupAnimals(['cacing', 'ayam', 'kuda', 'anoa', 'kancil']))
# [ ['ayam', 'anoa'], ['cacing'], ['kuda', 'kancil'] ]
print(groupAnimals(['cacing', 'ayam', 'kuda', 'anoa', 'kancil', 'unta', 'cicak' ]))
# [['anoa', 'ayam'], ['cacing', 'cicak'], ['kancil', 'kuda'], ['unta]]