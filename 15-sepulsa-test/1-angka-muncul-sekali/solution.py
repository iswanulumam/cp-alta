
def munculSekali(strAngka):
  mapper = {}
  for s in strAngka:
    key = s
    if key in mapper:
      mapper[key] += 1
    else:
      mapper[key] = 1
  result = []
  for m in mapper:
    if mapper[m] == 1:
      result.append(m)
  return result


print(munculSekali('1234123')) # [4]
print(munculSekali('76523752')) # [6, 3]