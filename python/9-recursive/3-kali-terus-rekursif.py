# def totalDigitRekursif(angka) :
#   # return angka // 10
#   if angka > 0:
#     return  angka % 10 * totalDigitRekursif(angka // 10)
#   else:
#     return 1

# def kaliTerusRekursif(angka):
#   if angka > 9:
#     return kaliTerusRekursif(totalDigitRekursif(angka))
#   else:
#     return angka

def kaliTerusRekursif(angka):
  print(angka)
  if angka < 10:
    return angka
  else:
    sisa = angka % 10
    angka = angka // 10
    return kaliTerusRekursif(angka * sisa)

# Driver Code
# print(kaliTerusRekursif(66)) # 8
# print(kaliTerusRekursif(3)) # 3
# print(kaliTerusRekursif(24)) # 8
# print(kaliTerusRekursif(654)) # 0
print(kaliTerusRekursif(1231)) # 6