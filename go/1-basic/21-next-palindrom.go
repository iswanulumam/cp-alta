package main

import "fmt"

func checkPalindromeNumber(number int) bool {
	var (
		reversedNumber int = 0
		newNumber      int = number
	)

	for newNumber != 0 {
		reversedNumber = reversedNumber * 10
		reversedNumber = reversedNumber + newNumber%10
		newNumber = newNumber / 10
	}

	if number == reversedNumber {
		return true
	}
	return false
}

func nextPalindrome(number int) int {

	number++
	for {
		if checkPalindromeNumber(number) {
			break
		} else {
			number++
		}
	}

	return number
}

func main() {
	fmt.Println(nextPalindrome(8))    // 9
	fmt.Println(nextPalindrome(10))   // 11
	fmt.Println(nextPalindrome(117))  // 121
	fmt.Println(nextPalindrome(175))  // 181
	fmt.Println(nextPalindrome(1000)) // 1001
}
