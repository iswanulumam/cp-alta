package main

import "fmt"

func pattern(nums int) {
	halfNums := (nums / 2) + 1
	for i := 1; i <= halfNums; i++ {
		for k := 1; k <= (halfNums - i); k++ {
			fmt.Print("  ")
		}
		for j := 1; j <= (i * 2) - 1; j++ {
			fmt.Print("*", " ")
		}
		fmt.Print("\n")
	}
	for i := halfNums - 1; i >= 1 ; i-- {
		for k := 1; k <= (halfNums - i); k++ {
			fmt.Print("  ")
		}
		for j := 1; j <= (i * 2) - 1; j++ {
			fmt.Print("*", " ")
		}
		fmt.Print("\n")
	}
}

func main() {
	pattern(3)
	pattern(5)
	pattern(7)
	pattern(9)
}