package main

import (
	"fmt"
)

func makanTerusRekursif(waktu int) int {
	if waktu > 0 {
		return 1 + makanTerusRekursif(waktu-15)
	}
	return 0
}

func main() {
	fmt.Println(makanTerusRekursif(66))  // 5
	fmt.Println(makanTerusRekursif(100)) // 7
	fmt.Println(makanTerusRekursif(90))  // 6
	fmt.Println(makanTerusRekursif(10))  // 1
	fmt.Println(makanTerusRekursif(0))   // 0
}
