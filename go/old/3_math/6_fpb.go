package main

import (
	"fmt"
)

func Euclid(a, b int) int {
	if b == 0 {
		return a
	} else {
		return Euclid(b, a%b)
	}
}

func main() {
	fmt.Println(Euclid(12, 16)) // 4
	fmt.Println(Euclid(50, 40)) // 10
	fmt.Println(Euclid(22, 99)) // 11
	fmt.Println(Euclid(24, 36)) // 12
	fmt.Println(Euclid(17, 23)) // 1
}
