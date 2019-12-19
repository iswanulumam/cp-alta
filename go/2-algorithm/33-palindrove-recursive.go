package main

import (
	"fmt"
)

func palindromeRecursive(sentence string, i int) bool {
	var (
		lenSentence     int = (len(sentence)) - 1
		halfLenSentence int = (len(sentence) / 2) - 1
	)

	if i > halfLenSentence {
		return true
	} else if sentence[i] != sentence[lenSentence-i] {
		return false
	}
	return palindromeRecursive(sentence, i+1)
}

func main() {
	fmt.Println(palindromeRecursive("katak", 0))       // true
	fmt.Println(palindromeRecursive("blanket", 0))     // false
	fmt.Println(palindromeRecursive("civic", 0))       // true
	fmt.Println(palindromeRecursive("kasur rusak", 0)) // true
	fmt.Println(palindromeRecursive("mister", 0))      // false
}
