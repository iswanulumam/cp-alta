package main

import (
	"fmt"
)

func MinAndMax(arr []int) string {
	minValue := 999999
	maxValue := -999999
	indexMin := 0
	indexMax := 0

	for i, val := range arr {
		if val > maxValue {
			maxValue = val
			indexMax = i
		}
		if val < minValue {
			minValue = val
			indexMin = i
		}
	}

	if indexMax < indexMin {
		return fmt.Sprintf("Min: %d Max: %d Index: %d ", minValue, maxValue, indexMax)
	}
	return fmt.Sprintf("Min: %d Max: %d Index: %d ", minValue, maxValue, indexMin)
}

func main() {
	fmt.Println(MinAndMax([]int{-1, 5, 6, 7, 4, 2}))   // Min: -1, Max: 7, Index: 0
	fmt.Println(MinAndMax([]int{5, 8, -7, 4, 2, -1}))  // Min: -7, Max: 8, Index: 1
	fmt.Println(MinAndMax([]int{-2, 5, 20, -7, 4, 7})) // Min: -7, Max: 20, Index: 2
	fmt.Println(MinAndMax([]int{-2, -5, 22, 7, 4, 7})) // Min: -5, Max: 22, Index: 1
	fmt.Println(MinAndMax([]int{4, 3, 21, 9, 4, 7}))   // Min: 3, Max: 21, Index: 1
}
