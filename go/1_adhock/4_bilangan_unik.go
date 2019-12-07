package main

import "fmt"

func checkUnik(bil int) bool {
	faktor_prima := []int{2, 3, 5}

	divider := 0
	for divider < 3 {
		if bil%faktor_prima[divider] == 0 {
			bil = bil / faktor_prima[divider]
		} else {
			divider++
		}
	}

	if bil == 1 {
		return true
	}
	return false
}

func generate_uni(bil int) {
	for i := 2; i <= bil; i++ {
		if checkUnik(i) {
			fmt.Print(i, " ")
		}
	}
	fmt.Println()
}

func main() {
	generate_uni(10) // 2 3 4 5 6 8 9 10
	generate_uni(20) // 2 3 4 5 6 8 9 10 12 15 16 18 20
}
