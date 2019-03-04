package main

import "fmt"
import "strings"

func checkAllVowels(str string) bool {
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
	fmt.Println(checkAllVowels("AiUeO"))        // true
	fmt.Println(checkAllVowels("aioeo"))        // true
	fmt.Println(checkAllVowels("AIUEO"))        // true
	fmt.Println(checkAllVowels("NotAllVowels")) // false
}
