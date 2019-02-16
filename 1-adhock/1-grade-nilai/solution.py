inputNilai = int(input('Masukan nilai:'))

if inputNilai >= 80 and inputNilai <= 100:
  print('A')
elif inputNilai >= 65 and inputNilai < 80:
  print('B')
elif inputNilai >= 50 and inputNilai < 65:
  print('C')
elif inputNilai >= 35 and inputNilai < 50:
  print('D')
elif inputNilai >= 0 and inputNilai < 35:
  print('E')
else:
  print('Nilai Invalid')