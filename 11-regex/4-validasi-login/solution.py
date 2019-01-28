import re
def validasiLogin(email, password):
	database=[
		{'email':'johndoe@gmail.com', 'password': '123456'},
		{'email':'johndoe@yahoo.co.id', 'password': '123456'},
		{'email':'john_doe@gmail.com', 'password': 'asdfasdfds'}
	]
	pattern_email= r'[\w\.-]+@[\w\.-]+'
	pattern_password= r'^[a-zA-Z0-9]{6,10}$'
	score=0

	pesan=[]
	if re.match(pattern_email, email):
		score += 1
	else:
		pesan.append('email tidak valid')
	if re.match(pattern_password, password):
		score += 1
	else:
		pesan.append('password tidak valid')

	valid_input=  True if score == 2 else False
	hasil= {
		'status': False,
		'pesan': []
	}
	if valid_input:
		for data in database:
			if email == data['email'] and password in data['password']:
				hasil['status']= True
				break

		if hasil['status'] == False:
			hasil['pesan'].append('karyawan tidak terdaftar atau password tidak valid')
	else:
		hasil['pesan']= pesan

	return hasil


print(validasiLogin('johndoe@gmail.com','123456')) 
# {'pesan': [], 'status': True}                                                                      
print(validasiLogin('jane@gmail.com','1245')) 
# {'pesan': ['password tidak valid'], 'status': False  
print(validasiLogin('johndoe_gmail.com','123456')) 
# {'pesan': ['email tidak valid'], 'status': False}   
print(validasiLogin('johndoe@yahoo.co.id','12abcd')) 
# {'pesan': ['karyawan tidak terdaftar atau password tidak valid], 'status': False}
print(validasiLogin('john_doe@gmail.com','asdfasdfds'))
# {'pesan': [], 'status': True} 
