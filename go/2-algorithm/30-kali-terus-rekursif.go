package main

import (
	"fmt"
)

func total(number int) int {
	if number != 0 {
		return (number % 10) * total(number/10)
	}
	return 1
}

func kaliTerusRekursif(number int) int {
	if total(number) < 10 {
		return total(number)
	}
	return kaliTerusRekursif(total(number))
}

func main() {
	fmt.Println(kaliTerusRekursif(66))   // 8
	fmt.Println(kaliTerusRekursif(3))    // 3
	fmt.Println(kaliTerusRekursif(24))   // 8
	fmt.Println(kaliTerusRekursif(654))  // 0
	fmt.Println(kaliTerusRekursif(1231)) // 6
}
