function solve(start, end, close, member) {
  for (let i = start; i <= end; i++) {
    if (i % close == 0) {
      console.log(`Tanggal ${i}: Tempat Fitness Tutup`)
    } else {
      let result = []
      for (let key in member) {
        if ((i - start) % member[key] == 0) {
          result.push(key)
        }
      }
      console.log(`Tanggal ${i}: ${result.join(', ')}`)
    }
  }
}

solve(7, 31, 5, { 'Tono': 2, 'Anton': 4, 'Budi': 5 })
/*
Tanggal 7: Tono, Anton, Budi
Tanggal 8:
Tanggal 9: Tono
Tanggal 10: Tempat Fitness Tutup
Tanggal 11: Tono, Anton
Tanggal 12: Budi
Tanggal 13: Tono
Tanggal 14:
Tanggal 15: Tempat Fitness Tutup
Tanggal 16:
Tanggal 17: Tono, Budi
Tanggal 18:
Tanggal 19: Tono, Anton
Tanggal 20: Tempat Fitness Tutup
Tanggal 21: Tono
Tanggal 22: Budi
Tanggal 23: Tono, Anton
Tanggal 24:
Tanggal 25: Tempat Fitness Tutup
Tanggal 26:
Tanggal 27: Tono, Anton, Budi
Tanggal 28:
Tanggal 29: Tono
Tanggal 30: Tempat Fitness Tutup
Tanggal 31: Tono, Anton
*/