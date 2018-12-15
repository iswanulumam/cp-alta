
def solve(start, end, close, member):
  memberCounter = member.copy()
  for i in range(start, end + 1):
    print(f'Tanggal {i}: ', end='')
    if i % close == 0:
      print('Tempat fitnes tutup', end='')
    else:
      for key in member:
        if (i - start) % member[key] == 0:
          print(key, end=' ')
    print()

solve(7, 31, 5, { 'Tono': 2, 'Anton': 4, 'Budi': 5 })
'''
Tanggal 7: Tono, Anton, Budi
Tanggal 8:
Tanggal 9: Tono
Tanggal 10: Tempat Fitness Tutup
Tanggal 11: Tono, Anton
Tanggal 12: Budi
Tanggal 13: Tono
Tanggal 14:
Tanggal 15: Tempat Fitness Tutup
Tanggal 16:
Tanggal 17: Tono, Budi
Tanggal 18:
Tanggal 19: Tono, Anton
Tanggal 20: Tempat Fitness Tutup
Tanggal 21: Tono
Tanggal 22: Budi
Tanggal 23: Tono, Anton
Tanggal 24:
Tanggal 25: Tempat Fitness Tutup
Tanggal 26:
Tanggal 27: Tono, Anton, Budi
Tanggal 28:
Tanggal 29: Tono
Tanggal 30: Tempat Fitness Tutup
Tanggal 31: Tono, Anton
'''