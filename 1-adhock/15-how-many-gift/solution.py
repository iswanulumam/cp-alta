def howManyGifts(maxBudget, gifts):
  gifts = sorted(gifts)
  total = 0;
  for gift in gifts:
    if maxBudget >= gift:
      total += 1
      maxBudget -= gift
    else:
      return total

print(howManyGifts(30000, [15000, 12000, 5000, 3000, 10000])) # 4
print(howManyGifts(10000, [2000, 2000, 3000, 1000, 2000, 10000])) # 5
print(howManyGifts(4000, [7500, 1500, 2000, 3000])) # 2
print(howManyGifts(50000, [25000, 25000, 10000, 15000])) # 3
print(howManyGifts(0, [10000, 3000])) # 0