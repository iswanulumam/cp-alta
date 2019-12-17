package main

import "fmt"

func faktorial(number int) int {
	if number == 1 {
		return number
	}
	return number * faktorial(number-1)
}

func main() {
	fmt.Println(faktorial(7))  // 5040
	fmt.Println(faktorial(8))  // 40320
	fmt.Println(faktorial(9))  // 362880
	fmt.Println(faktorial(10)) // 3628800
	fmt.Println(faktorial(12)) // 479001600
}
