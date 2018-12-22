function bandingkanAngka(A, B) {
  if (B > A) {
    return true
  } else if (A == B) {
    return -1
  }
  return false
}

// Driver Code
console.log(bandingkanAngka(5, 8)) // True
console.log(bandingkanAngka(5, 3)) // False
console.log(bandingkanAngka(4, 4)) // -1
console.log(bandingkanAngka(3, 3)) // -1
console.log(bandingkanAngka(17, 2)) // False