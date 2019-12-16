package main

import (
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

func primeX(number int) int {
	var (
		counter int
		primes []int
	)

	for len(primes) < number {
		if checkPrime(counter) {
			primes = append(primes, counter)
			counter++
		} else {
			counter++
		}
	}

	var lastIndex int = primes[len(primes) - 1]
	return lastIndex
}

func main() {
	fmt.Println(primeX(1)) // 2
	fmt.Println(primeX(5)) // 11
	fmt.Println(primeX(8)) // 19
	fmt.Println(primeX(9)) // 23
	fmt.Println(primeX(10)) // 29
}