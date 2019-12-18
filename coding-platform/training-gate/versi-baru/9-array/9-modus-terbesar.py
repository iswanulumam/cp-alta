
N = int(input())
list_number = list(map(int, input().split()))

mapper = {}

for ln in list_number:
  if ln in mapper:
    mapper[ln] += 1
  else:
    mapper[ln] = 1

maks_modus = 0
maks_key = 0

for item in mapper.items():
  if item[1] >= maks_modus:
    maks_modus = item[1]
    maks_key = item[0]

print(maks_key)