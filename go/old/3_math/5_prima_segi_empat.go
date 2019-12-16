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

func PrimaAfterX(X int) int {
	X = X + 1
	for !Prima(X) {
		X = X + 1
	}
	return X
}

func PrimaSegiEmpat(P, L, X int) {
	start := PrimaAfterX(X)
	total := 0
	for i := 1; i <= L; i++ {
		for j := 1; j <= P; j++ {
			total += start
			fmt.Print(start, " ")
			start = PrimaAfterX(start)
		}
		fmt.Println()
	}
	fmt.Println("Total :", total)
}

func main() {
	PrimaSegiEmpat(2, 3, 13)
	/*
		17 19
		23 29
		31 37
		Total: 156
	*/

	PrimaSegiEmpat(5, 2, 1)
	/*
		2  3  5  7 11
		13 17 19 23 29
		Total: 129
	*/
}
