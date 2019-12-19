package main

import(
	"fmt"
	"math"
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

func primeAfterNumber(number int) int {
	number++
	for !checkPrime(number) {
		number++
	}
	return number
}

func primaSegiEmpat(high, wide, start int) {
	var (
		sumPrimes int
		number int = start
	)
	for i := 1; i <= wide; i++ {
		for j := 1; j <= high; j++ {
			number = primeAfterNumber(number)
			fmt.Print(number, " ")
			sumPrimes += number
		}
		fmt.Print("\n")
	}
	fmt.Print(sumPrimes, "\n")
}

func main() {
	primaSegiEmpat(2, 3, 13)
	/*
	17 19
	23 29
	31 37
	156
	*/
	
	primaSegiEmpat(5, 2, 1)
	/*
	2  3  5  7 11
	13 17 19 23 29
	129
	*/
}