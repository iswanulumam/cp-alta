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

func main() {
	fmt.Println(checkPrime(1)) // False
	fmt.Println(checkPrime(3)) // True
	fmt.Println(checkPrime(7)) // True
	fmt.Println(checkPrime(6)) // False
	fmt.Println(checkPrime(23)) // True
}