package main

import (
	"fmt"
)

func ubahHuruf(sentence string) string {
	var newSentence string = ""
	for _, char := range sentence {
		if string(char) == "z" {
			char = char - 26
		}
		newSentence += string(char + 1)
	}
	return newSentence
}

func main() {
	fmt.Println(ubahHuruf("az"))        // ba
	fmt.Println(ubahHuruf("wow"))       // xpx
	fmt.Println(ubahHuruf("developer")) // efwfmpqfs
	fmt.Println(ubahHuruf("keren"))     // lfsfo
	fmt.Println(ubahHuruf("semangat"))  // tfnbohbu
}
