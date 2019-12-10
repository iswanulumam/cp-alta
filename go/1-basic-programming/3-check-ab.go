package main

import(
	"fmt"
	"math"
)

func CheckAB(input string) bool {
	var (
		indexOfA []int
		indexOfB []int
		distanceThreeChar bool
	)

	for index, char := range input {
		if char == 'a' {
			indexOfA = append(indexOfA, index)
		}
		if char == 'b' {
			indexOfB = append(indexOfB, index)
		}
	}

	for _, valueIndexOfA := range indexOfA {
		for _, valueIndexOfB := range indexOfB {
			var distanceAB = math.Abs(float64(valueIndexOfA - valueIndexOfB))
			if distanceAB == 4 {
				distanceThreeChar = true
			}
		}
	}

	if distanceThreeChar {
		return true
	}
	return false
}

func main() {
	fmt.Println(CheckAB("lane borrowed")) // True
	fmt.Println(CheckAB("i am sick")) // False
	fmt.Println(CheckAB("you are boring")) // True
	fmt.Println(CheckAB("barbarian")) // True
	fmt.Println(CheckAB("bacon and meat")) // False
}