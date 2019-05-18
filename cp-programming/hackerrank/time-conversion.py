def timeConversion(s):
  am_pm = s[8:]
  newFormat = ''
  if am_pm == 'AM':
    if int(s[0:2]) == 12:
      newFormat = f'00{s[2:8]}'
    else:
      newFormat = s[:8]
  elif am_pm == 'PM':
    if int(s[0:2]) == 12:
      newFormat = f'{int(s[0:2])}{s[2:8]}'
    else:
      newFormat = f'{int(s[0:2]) + 12}{s[2:8]}'
  return newFormat

print(timeConversion('07:05:45AM')) # 07:05:45
print(timeConversion('07:05:45PM')) # 19:05:45
print(timeConversion('12:40:22AM')) # 00:40:22
print(timeConversion('12:45:54PM')) # 12:45:54