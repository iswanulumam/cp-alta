function bilanganTerbesarTiga(a, b, c) {
  maks = a;
  if (b > maks) {
    maks = b;
  }
  if (c > maks) {
    maks = c;
  }
  return maks;
}

console.log(bilanganTerbesarTiga(1, 2, 3)) // 3
console.log(bilanganTerbesarTiga(10, 30, 20)) // 30
console.log(bilanganTerbesarTiga(17, 15, 17)) // 17
console.log(bilanganTerbesarTiga(79, 50, 20)) // 79
console.log(bilanganTerbesarTiga(200, 300, 400)) // 400