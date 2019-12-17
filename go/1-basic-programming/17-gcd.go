package main

import "fmt"

func gcd(a, b int) int {
	if b == 0 {
		return  a
	}
	return gcd(b, a % b)
}

func main() {
	fmt.Println(gcd(16, 12)) // 4
	fmt.Println(gcd(50, 40)) // 10
	fmt.Println(gcd(22, 99)) // 11
	fmt.Println(gcd(24, 36)) // 12
	fmt.Println(gcd(17, 23)) // 1
}