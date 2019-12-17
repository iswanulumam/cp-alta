package main

import "fmt"

// complexity O(n)
func pow(x, n int) int {
	if n == 0 {
		return 1
	}
	return x * pow(x, n-1)
}

// complexity O(log n)
func pow2(x, n int) int {
	if n == 0 {
		return 1
	}
	temp := pow2(x, n/2)
	if n%2 == 0 {
		return temp * temp
	}
	return x * temp * temp
}

func main() {
	fmt.Println(pow2(2, 3)) // 8
	fmt.Println(pow2(7, 2)) // 49
}
