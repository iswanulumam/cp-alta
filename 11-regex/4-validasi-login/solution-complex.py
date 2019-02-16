import re

def isLeapYear(year):
  status= False
  if (year % 4) == 0:
    if (year % 100) == 0:
      if (year % 400) == 0:
        status= True
    else:
      status= True
  return status

# Test Leap Year
# years=[2000, 1992, 1994, 1600, 1900]
# for year in years:
#   print('{} : {}'.format(year, (True if isLeapYear(year) else False)))

def validasiTanggalLahir(arr):
  hasil={
    'valid': [],
    'invalid': []
  }

  date_pattern= r'((\d{2}(([02468][048])|([13579][26]))[\-\/\s\.]?((((0?[13578])|(1[02]))[\-\/\s\.]?((0?[1-9])|([1-2][0-9])|(3[01])))|(((0?[469])|(11))[\-\/\s\.]?((0?[1-9])|([1-2][0-9])|(30)))|(0?2[\-\/\s\.]?((0?[1-9])|([1-2][0-9])))))|(\d{2}(([02468][1235679])|([13579][01345789]))[\-\/\s\.]?((((0?[13578])|(1[02]))[\-\/\s\.]?((0?[1-9])|([1-2][0-9])|(3[01])))|(((0?[469])|(11))[\-\/\s\.]?((0?[1-9])|([1-2][0-9])|(30)))|(0?2[\-\/\s\.]?((0?[1-9])|(1[0-9])|(2[0-8]))))))$'

  for profil in arr:
    separator='-'
    if '/' in profil['tgl_lahir']:
      separator='/'
    elif ' ' in profil['tgl_lahir']:
      separator= ' '
    elif '.' in profil['tgl_lahir']:
      separator= '.'
    else:
      pass

    parts= profil['tgl_lahir'].split(separator)
    tahun= int(parts[0])
    bulan= int(parts[1])
    hari= int(parts[2])

    profil['alasan']=[]
    
    error=0
    if re.match(date_pattern, profil['tgl_lahir']):
      # cek tahun
      if tahun < 1900 or tahun > 2099:
        profil['alasan'].append('tahun di luar batas yang ditentukan')
        error+= 1
    else:
      bulan_31_hari=[1,3,5,7,8,10,12]
      
      # cek tahun
      if tahun < 1900 or tahun > 2099:
        profil['alasan'].append('tahun di luar batas yang ditentukan')
        error+= 1

      # cek bulan
      if bulan > 12:
        profil['alasan'].append('bulan di luar batas yang ditentukan')
        error+= 1

      # cek hari pada bulan "februari" dan tahun kabisat
      if bulan == 2 and isLeapYear(tahun) == False and hari > 28:
        profil['alasan']=['penunjuk hari dalam bulan terkait tidak valid (cek aturan tahun kabisat)']
        error+=1

      # cek hari selain bulan "februari"
      if bulan != 2 and bulan <= 12:
        # cek bulan yang tidak boleh lebih dari 30 hari
        if hari > 31:
          profil['alasan'].append('hari di luar batas yang ditentukan')
          error+=1
        else:
          if hari > 30 and bulan not in bulan_31_hari:
            profil['alasan'].append('hari di luar batas yang ditentukan')
            error+=1

    # kategorikan hasil
    if error == 0:
      hasil['valid'].append(profil)
    else:
      hasil['invalid'].append(profil)
        
  return hasil

# Driver Code
print(validasiTanggalLahir([
  {'nama':'Jane Doe', 'tgl_lahir': '1992-10-31'},
  {'nama':'Jack Doe', 'tgl_lahir': '1997-02-29'},
  {'nama':'Donny Doe', 'tgl_lahir': '1988-12-01'}
])) 

'''
{
  'valid': [
    {'alasan': [], 'tgl_lahir': '1992-10-31', 'nama': 'Jane Doe'}, 
    {'alasan': [], 'tgl_lahir': '1988-12-01', 'nama': 'Donny Doe'}
  ], 
  'invalid': [
    {'alasan': ['penunjuk hari dalam bulan terkait tidak valid (cek aturan tahun kabisat)'], 'tgl_lahir': '1997-02-29', 'nama': 'Jack Doe'}
  ]
} 
'''

print(validasiTanggalLahir([
  {'nama':'Bayu Aji', 'tgl_lahir': '1983-04-31'},
  {'nama':'Tia Nugroho', 'tgl_lahir': '1984-08-29'},
  {'nama':'Ariel Bayu', 'tgl_lahir': '1988-07-32'}
]))


'''
{
  'valid': [
    {'nama': 'Tia Nugroho', 'alasan': [], 'tgl_lahir': '1984-08-29'}
  ], 
  'invalid': [
    {'nama': 'Bayu Aji', 'alasan': ['hari di luar batas yang ditentukan'], 'tgl_lahir': '1983-04-31'}, 
    {'nama': 'Ariel Bayu', 'alasan': ['hari di luar batas yang ditentukan'], 'tgl_lahir': '1988-07-32'}
  ]
} 
'''

print(validasiTanggalLahir([
  {'nama':'Tulus Saputra', 'tgl_lahir': '2100-05-31'},
  {'nama':'Sumitro Doe', 'tgl_lahir': '2002-13-31'},
  {'nama':'Juni Talira', 'tgl_lahir': '2001-09-12'}
])) 


'''
{
  'invalid': [
    {'tgl_lahir': '2100-05-31', 'nama': 'Tulus Saputra', 'alasan': ['tahun di luar batas yang ditentukan']},
    {'tgl_lahir': '2002-13-31', 'nama': 'Sumitro Doe', 'alasan': ['bulan di luar batas yang ditentukan']}
  ], 
  'valid': [
    {'tgl_lahir': '2001-09-12', 'nama': 'Juni Talira', 'alasan': []}
  ]
} 
'''
