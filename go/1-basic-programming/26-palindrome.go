package main

import (
	"fmt"
)

func palindrome(sentence string) bool {

}

func main() {
	fmt.Println(palindrome("katak"))       // True
	fmt.Println(palindrome("blanket"))     // False
	fmt.Println(palindrome("civic"))       // True
	fmt.Println(palindrome("kasur rusak")) // True
	fmt.Println(palindrome("mister"))      // False
}
