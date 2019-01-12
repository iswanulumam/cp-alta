def shoppingTime(memberId, money):
  
  item = [
    {'name': 'Sepatu Stacattu', 'price': 1500000},
    {'name': 'Baju Zoro', 'price': 500000},
    {'name': 'Baju H&H', 'price': 250000},
    {'name': 'Sweater Uniklooh', 'price': 175000},
    {'name': 'Casing Handphone', 'price': 50000},
  ]

  if memberId == '':
    return 'anda bukan member!'
  elif money < 50000:
    return 'uang anda tidak cukup'
  
  shopping_result = {
    'memberId': memberId,
    'money': money,
    'listPurchased': [],
    'changeMoney': money
  }

  for listItem in item:
    if shopping_result['changeMoney'] >= listItem['price']:
      shopping_result['listPurchased'].append(listItem['name'])
      shopping_result['changeMoney'] -= listItem['price']
  
  return shopping_result

# Driver Code
print(shoppingTime('1820RzKrnWn08', 2475000))
'''
{ memberId: '1820RzKrnWn08',
  money: 2475000,
  listPurchased:
   [ 'Sepatu Stacattu',
     'Baju Zoro',
     'Baju H&N',
     'Sweater Uniklooh',
     'Casing Handphone' ],
   changeMoney: 0 }
'''
print(shoppingTime('82Ku8Ma742', 170000))
'''
{ memberId: '82Ku8Ma742',
 money: 170000,
 listPurchased:
  [ 'Casing Handphone' ],
 changeMoney: 120000 }
'''
print(shoppingTime('', 2475000)) # Mohon maaf, toko X hanya berlaku untuk member saja
print(shoppingTime('234JdhweRxa53', 15000)) # Mohon maaf, uang tidak cukup
# print(shoppingTime()) # Mohon maaf, toko X hanya berlaku untuk member saja