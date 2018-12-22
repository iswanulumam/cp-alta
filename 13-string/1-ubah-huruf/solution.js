function ubahHuruf(str) {
  result = ''
  for (let s of str) {
    if (s == 'z') {
      result += 'a'
    } else {
      ubah = s.charCodeAt(0) + 1;
      result += String.fromCharCode(ubah)
    }
  }
  return result
}

// Driver Code
console.log(ubahHuruf('wow')) // xpx
console.log(ubahHuruf('developer')) // efwfmpqfs
console.log(ubahHuruf('keren')) // lfsfo
console.log(ubahHuruf('semangat')) // tfnbohbu