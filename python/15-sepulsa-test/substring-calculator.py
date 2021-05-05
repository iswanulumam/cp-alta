# 1.40 p.m - 2.40 pm 
def substringCalculator(string):
  mapping_substring = {}
  total_substring = 0

  for index, _ in enumerate(string):
    haed_substring = string[index:]
    if haed_substring not in mapping_substring:
      mapping_substring[haed_substring] = True
      total_substring += 1
    for j in range(len(haed_substring) - 1, -1, -1):
      substring = haed_substring[:j]
      if substring != '':
        if substring not in mapping_substring:
          mapping_substring[substring] = True
          total_substring += 1
  return total_substring

print(substringCalculator('a')) # 1
print(substringCalculator('ab')) # 3
print(substringCalculator('abcde')) # 15
print(substringCalculator('kincenvizh')) # 53
print(substringCalculator('jajdwlfvbeiibvlfqadtyqqvsqdnzldiaojqmhrnsjtivfrspaiszrmquqfgzrbplujmwhbdrowbbcoaydapauavrycbwmsflfqsjwlvgjfkdqocfmxzpsegwvfauqtvienkiedaqcxdzjsxhioomdxorefcdtqcaprcvirnrzhvjjwhljncsbczcvvesbxvayhkklswnlujtdzbxghledngghnwwpfnukwszdxsspgvyzlodsazevucczjubgkwfftcrwkhgjzfypspteldqbdosgeavkxtgnlqpdpuxckibqslrghvpzeaqqmggrojzeifjzsxmedhsigmfpbjpsxlfuzdldnxdmvxdjrgousgtvdnsccdmuozgtktxicsupqcawrorvdmakhxvhzhllqwgljcqidaqvrdhlrhvpqwfdshwrlrjmgxhojyggqiguleotbiqlcseoputzrfklcrpzvwufdjbieitcabyilxrsrinbws'))