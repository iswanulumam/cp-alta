package main

import (
	"fmt"
)

func caesarCipher(offset int, inputString string) string {

}

func main() {
	fmt.Println(caesarCipher(3, "abc"))
	// def
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
	// more test case
	fmt.Println(caesarCipher(-1, "abc"))
	// zab
	fmt.Println(caesarCipher(-1000, "abcdefghijklmnopqrstuvwxyz"))
	// opqrstuvwxyzabcdefghijklmn
	fmt.Println(caesarCipher(1000, "abcdefghijklmnopqrstuvwxyz"))
	// mnopqrstuvwxyzabcdefghijkl
}
