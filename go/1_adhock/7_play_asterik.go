package main

import (
	"fmt"
	"strings"
)

func pattern1(n int) {
	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			fmt.Print("* ")
		}
		fmt.Println()
	}
}

func pattern2(n int) {
	for i := 1; i <= n; i++ {
		fmt.Print(strings.Repeat(" ", 5-i))
		for j := 1; j <= i; j++ {
			fmt.Print("* ")
		}
		fmt.Println()
	}
}

func pattern3(n int) {
	for i := 1; i <= n; i++ {
		number := 1
		for j := 1; j <= i; j++ {
			fmt.Print(number, " ")
			number++
		}
		fmt.Println()
	}
}

func pattern4(n int) {
	number := 1
	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			fmt.Print(number, " ")
			number++
		}
		fmt.Println()
	}
}

func pattern5(n int) {
	for i := 1; i <= n; i++ {
		fmt.Print(strings.Repeat(" ", 5-i))
		for j := 1; j <= i; j++ {
			fmt.Print("*")
		}
		fmt.Println()
	}
}

func main() {
	pattern1(5)
	// *
	// * *
	// * * *
	// * * * *
	// * * * * *

	pattern2(5)
	// 		 *
	// 	  * *
	// 	 * * *
	//  * * * *
	// * * * * *

	pattern3(5)
	// 1
	// 1 2
	// 1 2 3
	// 1 2 3 4
	// 1 2 3 4 5

	pattern4(5)
	// 1
	// 2 3
	// 4 5 6
	// 7 8 9 10
	// 11 12 13 14 15

	pattern5(5)
	// 		 *
	// 	  **
	// 	 ***
	//  ****
	// *****
}
