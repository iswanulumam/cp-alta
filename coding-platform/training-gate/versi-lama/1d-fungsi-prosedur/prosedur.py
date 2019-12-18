def TulisJawaban(bil):
  if bil >= 1 and bil < 10:
    print('satuan')
  elif bil >= 10 and bil <= 99:
    print('puluhan')
  elif bil >= 100 and bil <= 999:
    print('ratusan')
  elif bil >= 1000 and bil <= 9999:
    print('ribuan')
  elif bil >= 10000 and bil <= 30000:
    print('puluhribuan')

while True:
  try:
      s = int(input())
      TulisJawaban(s)
  except EOFError:
      break