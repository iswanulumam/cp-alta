package main

import (
	"fmt"
	"math"
)

func Prima(N int) bool {
	if N < 2 {
		return false
	}
	for i := 2; i <= int(math.Sqrt(float64(N))); i++ {
		if N%i == 0 {
			return false
		}
	}
	return true
}

func GetPrime(X int) int {
	primeNumber := 2
	counter := 0
	for counter < X {
		if Prima(primeNumber) == true {
			counter++
		}
		if counter != X {
			primeNumber++
		}
	}
	return primeNumber
}

func main() {
	fmt.Println(GetPrime(1))  // 2
	fmt.Println(GetPrime(5))  // 11
	fmt.Println(GetPrime(8))  // 19
	fmt.Println(GetPrime(9))  // 23
	fmt.Println(GetPrime(10)) // 29
}
