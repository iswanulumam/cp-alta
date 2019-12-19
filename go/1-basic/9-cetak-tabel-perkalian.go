package main

import(
	"fmt"
)

func cetakTablePerkalian(number int) {
	for i := 1; i <= number; i++ {
		for j := i; j <= i * number; j += i {
			fmt.Print(j, " ")
		}
		fmt.Print("\n")
	}
}

func main() {
	cetakTablePerkalian(9)
}