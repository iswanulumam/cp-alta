def countProfit(shoppers):
  
  listBarang = [
    ['Sepatu Stacattu', 1500000, 10],
    ['Baju Zoro', 500000, 2],
    ['Sweater Uniklooh', 175000, 1],
  ]
  
  result = []
  mapper = {}

  for list in listBarang:
    key = list[0]
    if key not in mapper:
      mapper[key] = {
        'product': key,
        'shoppers': [],
        'price': list[1],
        'leftOver': list[2],
        'totalProfit': 0,
      }
  
  for shopper in shoppers:
    key_product = shopper['product']
    if key_product in mapper:
      if mapper[key_product]['leftOver'] >= shopper['amount']:
        mapper[key_product]['leftOver'] -= shopper['amount']
        mapper[key_product]['shoppers'].append(shopper['name'])
        mapper[key_product]['totalProfit'] += (mapper[key_product]['price'] * shopper['amount'])
  
  for mp_key in mapper:
    result.append({
      'product': mapper[mp_key]['product'],
      'shoppers': mapper[mp_key]['shoppers'],
      'leftOver': mapper[mp_key]['leftOver'],
      'totalProfit': mapper[mp_key]['totalProfit'],
    })

  return result


# Driver Code
print(countProfit([
  {'name': 'Windi', 'product': 'Sepatu Stacattu', 'amount': 2},
  {'name': 'Vanessa', 'product': 'Sepatu Stacattu', 'amount': 3},
  {'name': 'Rani', 'product': 'Sweater Uniklooh', 'amount': 2}
]))
'''
[ { 'product': 'Sepatu Stacattu',
  shoppers: [ 'Windi', 'Vanessa' ],
  leftOver: 5,
  totalProfit: 7500000 },
{ 'product': 'Baju Zoro',
  shoppers: [],
  leftOver: 2,
  totalProfit: 0 },
{ 'product': 'Sweater Uniklooh',
  shoppers: [],
  leftOver: 1,
  totalProfit: 0 } ]
'''

print(countProfit([{'name': 'Windi', 'product': 'Sepatu Stacattu', 'amount': 8}, {'name': 'Vanessa', 'product': 'Sepatu Stacattu', 'amount': 10}, {'name': 'Rani', 'product': 'Sweater Uniklooh', 'amount': 1}, {'name': 'Devi', 'product': 'Baju Zoro', 'amount': 1}, {'name': 'Lisa', 'product': 'Baju Zoro', 'amount': 1}]))
'''
 [ { 'product': 'Sepatu Stacattu',
     shoppers: [ 'Windi' ],
     leftOver: 2,
     totalProfit: 12000000 },
   { 'product': 'Baju Zoro',
     shoppers: [ 'Devi', 'Lisa' ],
     leftOver: 0,
     totalProfit: 1000000 },
   { 'product': 'Sweater Uniklooh',
     shoppers: [ 'Rani' ],
     leftOver: 0,
     totalProfit: 175000 } ]
'''
print(countProfit([{'name': 'Windi', 'product': 'Sepatu Naiki', 'amount': 5}]))
'''
 [ { 'product': 'Sepatu Stacattu',
     shoppers: [],
     leftOver: 10,
     totalProfit: 0 },
   { 'product': 'Baju Zoro',
     shoppers: [],
     leftOver: 2,
     totalProfit: 0 },
   { 'product': 'Sweater Uniklooh',
     shoppers: [],
     leftOver: 1,
     totalProfit: 0 } ]
'''
print(countProfit([])) # []