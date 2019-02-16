
function recursiveFormatDuration (seconds) {
  if (seconds == 0) {
    return `0 detik`;
  } else if (seconds >= 3600) {
    return `${Math.floor(seconds / 3600)} jam ` + recursiveFormatDuration(seconds % 3600);
  } else if (seconds >= 60) {
    return `${Math.floor(seconds / 60)} menit ` + recursiveFormatDuration(seconds % 60);
  } else if (seconds > 0) {
    return `${seconds} detik`;
  }
}

console.log(recursiveFormatDuration(3660)); // 1 jam 1 menit 0 detik
console.log(recursiveFormatDuration(60)); // 1 menit 2 detik
console.log(recursiveFormatDuration(62)); // 1 menit 2 detik
console.log(recursiveFormatDuration(7324)); // 2 jam 2 menit 4 detik
console.log(recursiveFormatDuration(0)); // 0 detik