import re
def validasiTanggalLahir(arr):
  hasil={
    'valid': [],
    'invalid': []
  }

  date_pattern='^(19|20)\d\d[- /.](0[1-9]|1[012])[- /.](0[1-9]|[12][0-9]|3[01])$'
  
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
    tahun= parts[0]
    bulan= parts[1]
    hari= parts[2]

    if re.match(date_pattern, profil['tgl_lahir']):
      
      if bulan == '02' and hari == '29' and (int(tahun) % 4 != 0):
        profil['alasan']=['penunjuk hari dalam bulan terkait tidak valid (tahun kabisat)']
        hasil['invalid'].append(profil)
      else:
        hasil['valid'].append(profil)
    else:
      profil['alasan']=[]
      if int(tahun) < 1900 or int(tahun) > 2099:
        profil['alasan'].append('tahun di luar batas yang ditentukan')
      if int(bulan) > 12:
        profil['alasan'].append('bulan di luar batas yang ditentukan')
      if int(hari) > 31:
        profil['alasan'].append('hari di luar batas yang ditentukan')
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
  'invalid': [
    {'tgl_lahir': '1997-02-29', 'nama': 'Jack Doe', 'alasan': ['penunjuk hari dalam bulan terkait tidak valid (tahun kabisat)']}
  ],
  'valid': [
    {'tgl_lahir': '1992-10-31', 'nama': 'Jane Doe'}, {'tgl_lahir': '1988-12-01', 'nama': 'Donny Doe'}
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
  'invalid': [
    {'tgl_lahir': '1988-07-32', 'alasan': ['hari di luar batas yang ditentukan'], 'nama': 'Ariel Bayu'}
  ],
  'valid': [
    {'tgl_lahir': '1983-04-31', 'nama': 'Bayu Aji'}, 
    {'tgl_lahir': '1984-08-29', 'nama': 'Tia Nugroho'}
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
    {'nama': 'Tulus Saputra', 'alasan': ['tahun di luar batas yang ditentukan'], 'tgl_lahir': '2100-05-31'}, 
    {'nama': 'Sumitro Doe', 'alasan': ['bulan di luar batas yang ditentukan'], 'tgl_lahir': '2002-13-31'}], 
  'valid': [
    {'nama': 'Juni Talira', 'tgl_lahir': '2001-09-12'}
  ]
}
'''
