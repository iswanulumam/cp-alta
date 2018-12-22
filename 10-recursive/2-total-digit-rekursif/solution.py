def totalDigitRekursif(angka) :
  # return angka // 10
  if angka > 0:
    return  angka % 10 + totalDigitRekursif(angka // 10)
  else:
    return 0

# Driver Code
print(totalDigitRekursif(512)) # 8
print(totalDigitRekursif(1542)) # 12
print(totalDigitRekursif(5)) # 5
print(totalDigitRekursif(21)) # 3
print(totalDigitRekursif(11111)) # 5