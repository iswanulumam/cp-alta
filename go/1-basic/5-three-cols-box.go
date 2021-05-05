package main

import(
	"fmt"
)

func DrawThreeColsBox(high int) string {
	var pattern string
	var countOrder int = 1
	for a := 1; a <= high; a++ {
		for b := 1; b <= high; b++ {
			if countOrder % 3 == 0 {
				pattern = pattern + "*"
			} else if countOrder % 2 == 0 {
				pattern = pattern + "$"
			} else if countOrder % 1 == 0 {
				pattern = pattern + "@"
			}
			pattern = pattern + " "
			countOrder++
		}
		pattern = pattern + "\n"
	}
	return pattern
}

func main() {

	// Driver Code
	fmt.Println(DrawThreeColsBox(3))
	/*
	@ $ *
	$ @ *
	@ $ *
	*/
	fmt.Println(DrawThreeColsBox(5))
	/*
	@ $ * $ @
	* @ $ * $
	@ * @ $ *
	$ @ * @ $
	* $ @ * @
	*/
	fmt.Println(DrawThreeColsBox(1))
	// @
}