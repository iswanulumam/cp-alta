def convertToCoin(money):
  coins = [1, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000]
  result = []
  for i in range(len(coins)-1, -1, -1):
    while money >= coins[i]:
      result.append(coins[i])
      money -= coins[i]
  return result

print(convertToCoin(543))
# output : [ 500, 20, 20, 1, 1, 1 ]

print(convertToCoin(7752))
# output : [ 5000, 2000, 500, 200, 50, 1, 1 ]

print(convertToCoin(37454))
# [ 10000, 10000, 10000, 5000, 2000, 200, 200, 50, 1, 1, 1, 1 ]