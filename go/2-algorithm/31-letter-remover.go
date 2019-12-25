package main

import (
	"fmt"
)

func letterRemoverRecursive_(sentence, letter string) string {
	var result string = ""
	for _, char := range sentence {
		var sChar string = string(char)
		if sChar != letter {
			result += sChar
		}
	}
	return result
}

func letterRemoverRecursive(sentence, letter string) string {

	var firstChar string = ""
	if len(sentence) > 0 {
		firstChar = string(sentence[0])
	}

	if firstChar == "" {
		return ""
	} else if firstChar != letter {
		return firstChar + letterRemoverRecursive(sentence[1:len(sentence)], letter)
	}
	return "" + letterRemoverRecursive(sentence[1:len(sentence)], letter)
}

func main() {
	fmt.Println(letterRemoverRecursive("12104123", "1"))
	// 20423
	fmt.Println(letterRemoverRecursive("the quick brown fox", "o"))
	// the quick brwn fx
	fmt.Println(letterRemoverRecursive("hahaha", "a"))
	// hhh
}
