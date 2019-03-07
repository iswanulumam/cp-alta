def moneyExchanger(nominalYangAkanDitukar, nominalYangDiutamakan = None):
  pecahanUang = [50000, 20000, 10000, 5000, 2000, 1000]
  qtyPecahanUang = [2, 3, 5, 8, 6, 10]
  hasilPenukaran = []
  
  indexStartExchange = 0
  if nominalYangDiutamakan != None:
    indexStartExchange = pecahanUang.index(nominalYangDiutamakan)
  
  totalPecahan = len(pecahanUang)
  for i in range(indexStartExchange, totalPecahan):
    while nominalYangAkanDitukar >= pecahanUang[i] and qtyPecahanUang[i] > 0:
      hasilPenukaran.append(pecahanUang[i])
      nominalYangAkanDitukar -= pecahanUang[i]
      qtyPecahanUang[i] -= 1
  
  if nominalYangAkanDitukar == 0:
    return hasilPenukaran
  else:
    return 'Uang pecahan tidak mencukupi'

print(moneyExchanger(100000))
# hasilnya : [ 50000, 50000 ]

print(moneyExchanger(100000, 20000))
# hasilnya : [ 20000, 20000, 20000, 10000, 10000, 10000, 10000 ]

print(moneyExchanger(100000, 5000))
# hasilnya : Uang pecahan tidak mencukupi