package main

import (
	"fmt"
)

func CheckPalin(N int) bool {
	initNumber := N
	remainder, reversedNumber := 0, 0
	for N != 0 {
		remainder = N % 10
		reversedNumber = reversedNumber*10 + remainder
		N = N / 10
	}
	if initNumber == reversedNumber {
		return true
	}
	return false
}

func PalinNumber(N int) int {
	result := N + 1
	for !CheckPalin(result) {
		result += 1
	}
	return result
}

func main() {
	fmt.Println(PalinNumber(8))    // 9
	fmt.Println(PalinNumber(10))   // 11
	fmt.Println(PalinNumber(117))  // 121
	fmt.Println(PalinNumber(175))  // 181
	fmt.Println(PalinNumber(1000)) // 1001
}
