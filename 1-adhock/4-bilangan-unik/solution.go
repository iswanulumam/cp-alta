package main

import "fmt"

func isUnik(bil int) bool {
	var faktor = []int{2, 3, 5}
	index := 0
	for index < 3 {
		if bil%faktor[index] == 0 {
			bil = bil / faktor[index]
		} else {
			index++
		}
	}
	if bil == 1 {
		return true
	} else {
		return false
	}
}

func bilanganUnik(bil int) {
	for i := 2; i <= bil; i++ {
		if isUnik(i) {
			fmt.Println(i)
		}
	}
}

func main() {
	bilanganUnik(10) // 2 3 4 5 6 8 9 10
	bilanganUnik(20) // 2 3 4 5 6 8 9 10 12 15 16 18 20
}
