package main

import "fmt"

func GenerateSnake(row int, column int) {
	if row == 0 && column == 0 {
		fmt.Println("row atau column minimal harus 1")
	}
	if row == 1 && column == 1 {
		fmt.Println("o")
	}
	for i := 1; i <= row; i++ {
		line := ""
		for j := 1; j <= column; j++ {
			if i == 1 && j == 1 {
				line += "~"
			} else if i == row && j == column && row%2 != 0 {
				line += "o"
			} else if i == row && j == 1 && row%2 == 0 {
				line += "o"
			} else if i%2 == 0 && j == column {
				line += "|"
			} else if i%2 != 0 && j == 1 {
				line += "|"
			} else {
				line += "_"
			}
		}
		fmt.Println(line)
	}
}

func main() {
	GenerateSnake(6, 10)
	/*
		~_________
		_________|
		|_________
		_________|
		|_________
		o________|
	*/

	fmt.Println()
	GenerateSnake(1, 30)
	/*
		~____________________________o
	*/

	fmt.Println()
	GenerateSnake(3, 20)
	/*
		~___________________
		___________________|
		|__________________o
	*/

	fmt.Println()
	GenerateSnake(1, 1)
	/*
		o
	*/

	fmt.Println()
	GenerateSnake(0, 0)
	/*
		row atau column minimal harus 1
	*/
}
