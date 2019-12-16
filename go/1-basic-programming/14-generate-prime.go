package main

import (
	"math"
	"fmt"
)

func checkPrime(number int) bool {
	if number < 2 {
		return false
	}
	sqrtNumber := int(math.Sqrt(float64(number)))
	for i := 2; i <= sqrtNumber; i++ {
		if number % i == 0 {
			return false
		}
	}
	return true
}

func generatePrime(number int) {
	for i := 2; i <= number; i++ {
		if checkPrime(i) {
			fmt.Print(i, " ")
		}
	}
	fmt.Print("\n")
}

func main() {
	generatePrime(17) // 2 3 5 7 11 13 17
	generatePrime(41) // 2 3 5 7 11 13 17 19 23 29 31 37 41
}