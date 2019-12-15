package main

import (
	"fmt"
	"strconv"
)

func pasanganTerbesar(numbers int) int {
	numbersInString := strconv.Itoa(numbers)
	
	var maks int = -999999
	for i := 0; i < len(numbersInString) - 1; i++ {
		currentValue, _ := strconv.Atoi(numbersInString[i:i+2])
		if currentValue > maks {
			maks = currentValue
		}
	}
	return maks
}

func main() {
	fmt.Println(pasanganTerbesar(641573)) // 73
	fmt.Println(pasanganTerbesar(12783456)) // 83
	fmt.Println(pasanganTerbesar(910233)) // 91
	fmt.Println(pasanganTerbesar(71856421)) // 85
	fmt.Println(pasanganTerbesar(79918293)) // 99
}