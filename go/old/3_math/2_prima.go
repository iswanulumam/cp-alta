package main

import(
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

func main() {
	fmt.Println(Prima(1)) // false
	fmt.Println(Prima(3)) // true
	fmt.Println(Prima(7)) // true
	fmt.Println(Prima(6)) // false
	fmt.Println(Prima(23)) // true
}