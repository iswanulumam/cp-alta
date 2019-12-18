package main

import (
	"fmt"
)

func balikKata(sentence string) string {
	var (
		newSentence string = ""
		iterator    int    = len(sentence) - 1
	)

	for iterator >= 0 {
		newSentence += string(sentence[iterator])
		iterator--
	}

	return newSentence
}

func main() {
	fmt.Println(balikKata("Hello World and Coders")) // sredoC dna dlroW olleH
	fmt.Println(balikKata("John Doe"))               // eoD nhoJ
	fmt.Println(balikKata("I am a bookworm"))        // mrowkoob a ma I
	fmt.Println(balikKata("Coding is my hobby"))     // ybboh ym si gnidoC
	fmt.Println(balikKata("Super"))                  // repuS
}
