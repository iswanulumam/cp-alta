package main

import (
	"fmt"
)

func GenerateBorderBox(N int) {
	mid := N/2 + 1
	for i := 1; i <= N; i++ {
		line := ""
		for j := 1; j <= N; j++ {
			if i == mid && j == mid {
				line += "*"
			} else if (i == 1) || (i == N) || (j == 1) || (j == N) {
				line += "I"
			} else if ((i == 3) || (i == N-2)) && j != 2 && j != N-1 {
				line += "I"
			} else if ((j == 3) || (j == N-2)) && i != 2 && i != N-1 {
				line += "I"
			} else {
				line += " "
			}
		}
		fmt.Println(line)
	}
}

func main() {

	GenerateBorderBox(9)
	/*
		IIIIIIIII
		I       I
		I IIIII I
		I I   I I
		I I * I I
		I I   I I
		I IIIII I
		I       I
		IIIIIIIII
	*/
	GenerateBorderBox(13)
	/*
		IIIIIIIIIIIII
		I           I
		I IIIIIIIII I
		I I       I I
		I I       I I
		I I       I I
		I I   *   I I
		I I       I I
		I I       I I
		I I       I I
		I IIIIIIIII I
		I           I
		IIIIIIIIIIIII
	*/
}
