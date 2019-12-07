package main

import (
	"fmt"
)

func Faktorial(N int) int {
	if N == 1 {
		return 1
	} else {
		return N * Faktorial(N-1)
	}
}

func main() {
	fmt.Println(Faktorial(7))  // 5040
	fmt.Println(Faktorial(8))  // 40320
	fmt.Println(Faktorial(9))  // 362880
	fmt.Println(Faktorial(10)) // 3628800
	fmt.Println(Faktorial(12)) // 479001600
}
