package main

import (
	"fmt"
)

func cetakTabelPerkalian(n int) {
	for i := 1; i <= n; i++ {
		for j := i; j <= 9*i; j += i {
			fmt.Print(j, " ")
		}
		fmt.Println()
	}
}

func main() {
	cetakTabelPerkalian(9)
}
