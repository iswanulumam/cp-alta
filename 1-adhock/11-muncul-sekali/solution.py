def munculSekali(angka):
  map_angka = {}
  result_angka = []
  for a in angka:
    key = a
    if key not in map_angka:
      map_angka[key] = 1
    else:
      map_angka[key] += 1
  result = []
  for a in angka:
    key = a
    if map_angka[key] == 1:
      result.append(a)
  return result

print(munculSekali('1234123')) # ['4']
print(munculSekali('76523752')) # ['6', '3']
print(munculSekali('1122')) # []
print(munculSekali('1122333')) # []
print(munculSekali('112723335')) # ['7', '5']
print(munculSekali('112523337')) # ['5', '7']