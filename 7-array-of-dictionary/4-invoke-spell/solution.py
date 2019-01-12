def invokeSpell (input) :
  spells = [
      { 'q': 3, 'w': 0, 'e': 0, 'spellName': 'Cold Snap' },
      { 'q': 0, 'w': 2, 'e': 1, 'spellName': 'Alacrity' },
      { 'q': 1, 'w': 0, 'e': 2, 'spellName': 'Forge Spirit' },
      { 'q': 0, 'w': 0, 'e': 3, 'spellName': 'Sunstrike' },
      { 'q': 1, 'w': 2, 'e': 0, 'spellName': 'Tornado' },
      { 'q': 0, 'w': 3, 'e': 0, 'spellName': 'EMP' },
      { 'q': 0, 'w': 1, 'e': 2, 'spellName': 'Chaos Meteor' },
      { 'q': 1, 'w': 1, 'e': 1, 'spellName': 'Deafening Blast' },
      { 'q': 2, 'w': 0, 'e': 1, 'spellName': 'Ice Wall' },
      { 'q': 2, 'w': 1, 'e': 0, 'spellName': 'Ghost Walk' },
  ];

  mapper = {
    'q': 0,
    'w': 0,
    'e': 0
  }
  
  for i in input:
    if i in mapper:
      mapper[i] += 1

  for spell in spells:
    if spell['q'] == mapper['q'] and spell['w'] == mapper['w'] and spell['e'] == mapper['e']:
      return spell['spellName']
  return 'combination not exist'

print(invokeSpell('qwe')) # Deafening Blast
print(invokeSpell('ewq')) # Deafening Blast
print(invokeSpell('qqq')) # Cold Snap
print(invokeSpell('wwq')) # Tornado
print(invokeSpell('wwe')) # Alacrity
print(invokeSpell('wew')) # Alacrity
print(invokeSpell('wqa')) # Combination does not exist