package main

import(
	"fmt"
)

func Xo(input string) bool {
	var countXo int
	
	for _, char := range input {
		if char == 'x' {
			countXo++
		}	
		if char == 'o' {
			countXo--
		}
	}

	if countXo == 0 {
		return true
	}
	return false
}

func main() {
	fmt.Println(Xo("xoxoxo")) // True
	fmt.Println(Xo("oxooxo")) // False
	fmt.Println(Xo("oxo")) // False
	fmt.Println(Xo("xxxooo")) // True
	fmt.Println(Xo("xoxooxxo")) // True
}