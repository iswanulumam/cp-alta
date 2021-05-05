package main

import(
	"fmt"
	"math"
)

func TargetTerdekat(XOArray []string) int {
	var (
		indexOfX []int
		indexOfO []int
		closestXO int = 1000
	)

	for index, char := range XOArray {
		if char == "x" {
			indexOfX = append(indexOfX, index)
		}
		if char == "o" {
			indexOfO = append(indexOfO, index)
		}
	}

	for _, valueX := range indexOfX {
		for _, valueO := range indexOfO {
			var different int = int(math.Abs(float64(valueX - valueO)))
			if different < closestXO {
				closestXO = different
			}
		}
	}
	if closestXO == 1000 {
		return 0
	}
	return closestXO
}

func main() {
	fmt.Println(TargetTerdekat([]string{" ", " ", "o", " ", " ", "x", " ", "x"})) // 3
	fmt.Println(TargetTerdekat([]string{"o", " ", " ", " ", "x", "x", "x"})) // 4
	fmt.Println(TargetTerdekat([]string{"x", " ", " ", " ", "x", "x", "o", " "})) // 1
	fmt.Println(TargetTerdekat([]string{" ", " ", "o", " "})) // 0
	fmt.Println(TargetTerdekat([]string{" ", "o", " ", "x", "x", " ", " ", "x"})) // 2
}