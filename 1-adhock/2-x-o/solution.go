package main

import "fmt"

func xo(str string) bool {
	counter := 0
	for _, s := range str {
		if string(s) == "x" {
			counter++
		} else if string(s) == "o" {
			counter--
		}
	}
	if counter == 0 {
		return true
	}
	return false
}

func main() {
	fmt.Println(xo("xoxoxo"))   // True
	fmt.Println(xo("oxooxo"))   // False
	fmt.Println(xo("oxo"))      // False
	fmt.Println(xo("xxxooo"))   // True
	fmt.Println(xo("xoxooxxo")) // True
}
