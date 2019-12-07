package main

import (
	"fmt"
)

func findMax(numbers []int) int {
	maksNumber := numbers[0]
	for _, number := range numbers {
		if number > maksNumber {
			maksNumber = number
		}
	}
	return maksNumber
}

func findMin(numbers []int) int {
	minNumber := numbers[0]
	for _, number := range numbers {
		if number < minNumber {
			minNumber = number
		}
	}
	return minNumber
}

func missingNumber(numbers []int) []int {

	if len(numbers) == 0 {
		return []int{}
	}

	maxNumber := findMax(numbers)
	minNumber := findMin(numbers)
	mapperNumber := map[int]bool{}
	result := []int{}

	for _, number := range numbers {
		key := number
		mapperNumber[key] = true
	}

	for i := minNumber; i <= maxNumber; i++ {
		key := i
		_, exist := mapperNumber[key]
		if !exist {
			result = append(result, key)
		}
	}

	return result
}

func main() {
	fmt.Println(missingNumber([]int{1, 5, 10, 7, 6})) // [2, 3, 4, 8, 9]
	fmt.Println(missingNumber([]int{10, 1}))          // [2, 3, 4, 5, 6, 7, 8, 9]
	fmt.Println(missingNumber([]int{90, 92, 91}))     // []
	fmt.Println(missingNumber([]int{60, 54, 50}))     // [51, 52, 53, 55, 56, 57, 58, 59]
	fmt.Println(missingNumber([]int{}))               // []
}
