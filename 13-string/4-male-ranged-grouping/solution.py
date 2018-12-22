def meleeRangedGrouping (str):
  # your code hero
  if str == '':
    return []
  hero = str.split(',')
  result = [[], []]
  for h in hero:
    c = h.split('-')
    if c[1] == 'Ranged':
      result[0].append(c[0])
    else:
      result[1].append(c[1])
  return result

# Driver Code
print(meleeRangedGrouping('Razor-Ranged,Invoker-Ranged,Meepo-Melee,Axe-Melee,Sniper-Ranged'))
# [ ['Razor', 'Invoker', 'Sniper'], ['Meepo', 'Axe'] ]

print(meleeRangedGrouping('Drow Ranger-Ranged,Chen-Ranged,Dazzle-Ranged,Io-Ranged'))
# [ ['Drow Ranger', 'Chen', 'Dazzle', 'Io'], [] ]

print(meleeRangedGrouping('')) # []