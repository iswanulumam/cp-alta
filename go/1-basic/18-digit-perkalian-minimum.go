package main

import (
	"fmt"
	"strconv"
)

func digitPerkalianMinimum(number int) int {
	var (
		digitPerkalian string = ""
		minLengthDigit int    = 999999999
	)

	for i := 1; i <= (number/2)+1; i++ {
		if number%i == 0 {
			digitPerkalian = strconv.Itoa(number/i) + strconv.Itoa(i)
			if len(digitPerkalian) < minLengthDigit {
				minLengthDigit = len(digitPerkalian)
			}
		}
	}
	return minLengthDigit
}

func main() {
	fmt.Println(digitPerkalianMinimum(24))  // 2
	fmt.Println(digitPerkalianMinimum(90))  // 3
	fmt.Println(digitPerkalianMinimum(20))  // 2
	fmt.Println(digitPerkalianMinimum(179)) // 4
	fmt.Println(digitPerkalianMinimum(1))   // 2
}
