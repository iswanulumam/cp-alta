package main

import "fmt"

func drawThreeColsBox(height int) {
	seq := 1
	for i := 1; i <= height; i++ {
		for j := 1; j <= height; j++ {
			if seq%3 == 0 {
				fmt.Print("* ")
			} else if seq%2 == 0 {
				fmt.Print("$ ")
			} else if seq%2 != 0 {
				fmt.Print("@ ")
			}
			seq++
		}
		fmt.Print("\n")
	}
}

func main() {
	// Driver Code
	drawThreeColsBox(3)
	// @ $ *
	// $ @ *
	// @ $ *

	drawThreeColsBox(5)

	// @ $ * $ @
	// * @ $ * $
	// @ * @ $ *
	// $ @ * @ $
	// * $ @ * @
	drawThreeColsBox(1)
	// @
}
