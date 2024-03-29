package main

import "fmt"

func faktorBilangan(number int) {
	for i := 1; i <= number; i++ {
		if number % i == 0 {
			fmt.Print(i, " ")
		}		
	}
	fmt.Print("\n")
}

func main() {
	faktorBilangan(6) // 1 2 3 6
	faktorBilangan(12) // 1 2 3 4 6 12
	faktorBilangan(14) // 1 2 7 14
	faktorBilangan(16) // 1 2 4 8 16
	faktorBilangan(20) // 1 2 4 5 10 20
}