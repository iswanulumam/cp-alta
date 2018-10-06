def ubahHuruf(kata):
  new_kata = ''
  
  for i in kata:
    if i == 'z':
      new_kata = new_kata + 'a'
    elif i == ' ':
      new_kata = new_kata + ' '
    else:
      new_kata = new_kata + chr(ord(i) + 1)
  
  return new_kata

# Driver Code
print(ubahHuruf('wow')) # xpx
print(ubahHuruf('developer')) # efwfmpqfs
print(ubahHuruf('keren')) # lfsfo
print(ubahHuruf('semangat')) # tfnbohbu