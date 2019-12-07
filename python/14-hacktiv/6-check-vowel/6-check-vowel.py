def checkAllVowels(str):
  vowel = ['a', 'i', 'u', 'e', 'o']
  for s in str:
    c = s.lower()
    if c not in vowel:
      return False
  return True

print(checkAllVowels('AiUeO')) # true
print(checkAllVowels('aioeo')) # true
print(checkAllVowels('AIUEO')) # true
print(checkAllVowels('NotAllVowels')) # false