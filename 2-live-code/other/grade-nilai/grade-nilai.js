/**
Buatlah sebuah algoritma untuk kasus berikut:
Seorang pengajar sedang memeriksa ujian mahasiswa dan akan memberikan desc nilai dari A-E dengan ketentuan sebagai berikut:
 - Nilai 80 - 100: A
 - Nilai 65 - 79: B
 - Nilai 50 - 64: C
 - Nilai 35 - 49: D
 - Nilai 0 - 34: E

 Tampilkan desc nilai dan nama siswa saat pengajar tersebut memasukkan nilai dan nama yang dia inginkan.

NOTED:
Jika nilai mahasiswa kurang dari 0 atau lebih dari 100 maka tampilkan 'Nilai Invalid'

JAWABAN 001
-----------------------------------

INIT Nama 
INIT Nilai 

INPUT (Nama)
INPUT (Nilai)

IF Nilai < 0 OR Nilai > 100 THAN
	PRINT 'Nilai Invalid'
ELSE IF Nilai >= 80 AND Nilai <= 100
	PRINT Nama 'memperoleh nilai A'
ELSE IF Nilai >= 65 AND Nilai <= 79
	PRINT Nama 'memperoleh nilai B'
ELSE IF Nilai >= 50 AND Nilai <= 64
	PRINT Nama 'memperoleh nilai C'
ELSE IF Nilai >= 35 AND Nilai <= 49
	PRINT Nama 'memperoleh nilai D'
ELSE IF Nilai >= 0 AND Nilai <= 34
	PRINT Nama 'memperoleh nilai E'
ENDIF

**/