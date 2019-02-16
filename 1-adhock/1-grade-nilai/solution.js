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
**/

let inputNilai = 70

if (inputNilai > 79 && inputNilai <= 101) {
  console.log('A')
} else if (inputNilai > 64) {
  console.log('B')
} else if (inputNilai > 49) {
  console.log('C')
} else if (inputNilai > 34) {
  console.log('D')
} else if (inputNilai > -1) {
  console.log('E')
}