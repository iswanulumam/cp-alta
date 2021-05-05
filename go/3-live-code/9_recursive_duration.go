package main

import (
	"fmt"
	"strconv"
)

func RecursiveFormatDuration(seconds int) string {
	if seconds >= 3600 {
		val1 := strconv.Itoa(seconds / 3600)
		return val1 + " jam " + RecursiveFormatDuration(seconds%3600)
	} else if seconds >= 60 {
		val2 := strconv.Itoa(seconds / 60)
		return val2 + " menit " + RecursiveFormatDuration(seconds%60)
	} else if seconds > 0 {
		return strconv.Itoa(seconds) + " detik"
	} else {
		return ""
	}
}

func main() {
	fmt.Println(RecursiveFormatDuration(86400)) // 24 jam
	fmt.Println(RecursiveFormatDuration(60))    // 1 menit
	fmt.Println(RecursiveFormatDuration(6))     // 6 detik
	fmt.Println(RecursiveFormatDuration(3660))  // 1 jam 1 menit
	fmt.Println(RecursiveFormatDuration(62))    // 1 menit 2 detik
	fmt.Println(RecursiveFormatDuration(7324))  // 2 jam 2 menit 4 detik
}
