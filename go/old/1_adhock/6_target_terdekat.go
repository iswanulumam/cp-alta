package main

import (
	"fmt"
	"math"
)

func targetTedekat(array []string) int {
	storePosX := []float64{}
	storePosO := []float64{}

	result := 999.

	for i, value := range array {
		if value == "x" {
			storePosX = append(storePosX, float64(i))
		}
		if value == "o" {
			storePosO = append(storePosO, float64(i))
		}
	}

	for _, posX := range storePosX {
		for _, posO := range storePosO {
			if math.Abs(posX-posO) < result {
				result = math.Abs(posX - posO)
			}
		}
	}

	if result == 999 {
		return 0
	}
	return int(result)
}

func main() {
	fmt.Println(targetTedekat([]string{" ", " ", "o", " ", " ", "x", " ", "x"})) // 3
	fmt.Println(targetTedekat([]string{"o", " ", " ", " ", "x", "x", "x"}))      // 4
	fmt.Println(targetTedekat([]string{"x", " ", " ", " ", "x", "x", "o", " "})) // 1
	fmt.Println(targetTedekat([]string{" ", " ", "o", " "}))                     // 0
	fmt.Println(targetTedekat([]string{" ", "o", " ", "x", "x", " ", " ", "x"})) // 2
}
