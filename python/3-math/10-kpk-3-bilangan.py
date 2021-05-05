def gcd(a, b):
  if b == 0:
    return a
  else:
    return gcd(b, a % b)

def lcm(a, b):
  return a * (b // gcd(a, b))

def KpkTigaBilangan(a, b, c):
  return lcm(lcm(a, b), c)

print(KpkTigaBilangan(2, 7, 3)) # 42
print(KpkTigaBilangan(1, 2, 3)) # 6
print(KpkTigaBilangan(5, 7, 6)) # 210
print(KpkTigaBilangan(7, 5, 9)) # 315
print(KpkTigaBilangan(2, 7, 5)) # 70