def naikAngkot(arrPenumpang):
  rute = ['A', 'B', 'C', 'D', 'E', 'F']

  if len(arrPenumpang) == 0:
    return []

  result = []

  for arr in arrPenumpang:
    mapper = {}
    mapper['penumpang'] = arr[0]
    mapper['naikDari'] = arr[1]
    mapper['tujuan'] = arr[2]
    mapper['bayar'] = abs(rute.index(arr[1]) - rute.index(arr[2])) * 2000
    result.append(mapper)

  return result

# Driver Code
print(naikAngkot([['Dimitri', 'B', 'F'], ['Icha', 'A', 'B']]))
'''
[
  { penumpang: 'Dimitri', naikDari: 'B', tujuan: 'F', bayar: 8000 },
  { penumpang: 'Icha', naikDari: 'A', tujuan: 'B', bayar: 2000 }
]
'''
print(naikAngkot([])) # []