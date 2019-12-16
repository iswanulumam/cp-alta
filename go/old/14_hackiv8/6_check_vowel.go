package main

import "fmt"
import "strings"

func CheckAllVowels(str string) bool {
	vowel := map[string]bool{
		"a": true,
		"i": true,
		"u": true,
		"e": true,
		"o": true,
	}
	for _, c := range str {
		s := strings.ToLower(string(c))
		_, ok := vowel[s]
		if !ok {
			return false
		}
	}
	return true
}

func main() {
	fmt.Println(CheckAllVowels("AiUeO"))        // true
	fmt.Println(CheckAllVowels("aioeo"))        // true
	fmt.Println(CheckAllVowels("AIUEO"))        // true
	fmt.Println(CheckAllVowels("NotAllVowels")) // false
}
