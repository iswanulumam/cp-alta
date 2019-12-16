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

func GeneratePrima(N int) {
	for i := 2; i <= N; i++ {
		if Prima(i) {
			fmt.Print(i, " ")
		}
	}
	fmt.Println()
}

func main() {
	GeneratePrima(17) // 2 3 5 7 11 13 17
	GeneratePrima(41) // 2 3 5 7 11 13 17 19 23 29 31 37 41
}
