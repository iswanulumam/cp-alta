def attack (damage) :
  return damage * 2

def damageCalculation (numberOfAttacks, damagePerAttack) :
  return (numberOfAttacks * damagePerAttack) - attack(numberOfAttacks)

# Driver Code
print(damageCalculation(9, 25)) # 207

print(damageCalculation(10, 4)) # 20

print(damageCalculation(5, 20)) # 90