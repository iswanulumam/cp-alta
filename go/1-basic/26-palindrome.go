package main

import (
	"fmt"
)

func palindrome(sentence string) bool {
	var (
		lenSentence     int = (len(sentence)) - 1
		halfLenSentence int = (len(sentence) / 2) - 1
	)

	for i := 0; i <= halfLenSentence; i++ {
		if sentence[i] != sentence[lenSentence-i] {
			return false
		}
	}

	return true
}

func main() {
	fmt.Println(palindrome("katak"))       // True
	fmt.Println(palindrome("blanket"))     // False
	fmt.Println(palindrome("civic"))       // True
	fmt.Println(palindrome("kasur rusak")) // True
	fmt.Println(palindrome("mister"))      // False
}
