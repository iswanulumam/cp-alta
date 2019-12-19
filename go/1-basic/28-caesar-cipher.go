package main

import (
	"fmt"
	"math"
)

// 'a' has code 97
// 97 + ? (122-a = 25) = 122

// 'b' has code 98
// 'z' having code 122.

func caesarCipher(offset int, inputString string) string {
	var result string = ""
	offset = offset % 26

	if offset >= 0 {
		for _, is := range inputString {
			var (
				intIS   int = int(is)
				newChar int = intIS + offset
			)
			if string(is) == " " {
				result += " "
			} else if newChar > 122 {
				result += string(newChar - 26)
			} else {
				result += string(newChar)
			}
		}
	} else if offset < 0 {
		for _, is := range inputString {
			var (
				intIS   int = int(is)
				newChar int = intIS - int(math.Abs(float64(offset)))
			)

			if string(is) == " " {
				result += " "
			} else if newChar < 97 {
				result += string(newChar + 26)
			} else {
				result += string(newChar)
			}
		}
	}

	return result
}

func main() {

	fmt.Println(caesarCipher(-1, "bcd"))
	// abc
	fmt.Println(caesarCipher(-1, "a"))
	// z
	fmt.Println(caesarCipher(-1000, "a"))
	// o
	fmt.Println(caesarCipher(-1000, "b"))
	// p
	fmt.Println(caesarCipher(-1, "abc"))
	// zab
	fmt.Println(caesarCipher(-1000, "abcdefghijklmnopqrstuvwxyz"))
	// opqrstuvwxyzabcdefghijklmn
	fmt.Println(caesarCipher(3, "abc xyz"))
	// def abc
	fmt.Println(caesarCipher(1, "abcdefghijklmnopqrstuvwxyz"))
	// bcdefghijklmnopqrstuvwxyza
	fmt.Println(caesarCipher(2, "abcdefghijklmnopqrstuvwxyz"))
	// cdefghijklmnopqrstuvwxyzab
	fmt.Println(caesarCipher(3, "abcdefghijklmnopqrstuvwxyz"))
	// defghijklmnopqrstuvwxyzabc
	fmt.Println(caesarCipher(4, "abcdefghijklmnopqrstuvwxyz"))
	// efghijklmnopqrstuvwxyzabcd
	fmt.Println(caesarCipher(5, "abcdefghijklmnopqrstuvwxyz"))
	// fghijklmnopqrstuvwxyzabcde
	fmt.Println(caesarCipher(26, "abcdefghijklmnopqrstuvwxyz"))
	// abcdefghijklmnopqrstuvwxyz
	fmt.Println(caesarCipher(1000, "abcdefghijklmnopqrstuvwxyz"))
	// mnopqrstuvwxyzabcdefghijkl
	fmt.Println(caesarCipher(1000000, "abcdefghijklmnopqrstuvwxyz"))
	// opqrstuvwxyzabcdefghijklmn
}
