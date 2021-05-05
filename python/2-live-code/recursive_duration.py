def recursiveFormatDuration(seconds):
  if seconds >= 3600:
    return f'{seconds // 3600} jam ' + recursiveFormatDuration(seconds % 3600)
  elif seconds >= 60:
    return f'{seconds // 60} menit ' + recursiveFormatDuration(seconds % 60)
  elif seconds > 0:
    return f'{seconds} detik '
  else:
    return ''

print(recursiveFormatDuration(86400)) # 24 jam
print(recursiveFormatDuration(60)) # 1 menit
print(recursiveFormatDuration(6)) # 6 detik
print(recursiveFormatDuration(3660)) # 1 jam 1 menit
print(recursiveFormatDuration(62)) # 1 menit 2 detik
print(recursiveFormatDuration(7324)) # 2 jam 2 menit 4 detik  
print(recursiveFormatDuration(86400)) # 24 jam 