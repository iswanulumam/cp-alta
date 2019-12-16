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

func Lcm(a, b int) int {
	return a * b / Euclid(a, b)
}

func KpkTigaBilangan(a, b, c int) int {
	return Lcm(Lcm(a, b), c)
}

func main() {
	fmt.Println(KpkTigaBilangan(2, 7, 3)) // 42
	fmt.Println(KpkTigaBilangan(1, 2, 3)) // 6
	fmt.Println(KpkTigaBilangan(5, 7, 6)) // 210
	fmt.Println(KpkTigaBilangan(7, 5, 9)) // 315
	fmt.Println(KpkTigaBilangan(2, 7, 5)) // 70
}
