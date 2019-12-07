package main

import (
	"fmt"
)

func MaxSequence(arr []int) int {
	max := -999999
	for i, _ := range arr {
		sum := 0
		for _, val := range arr[i:] {
			sum += val
			if sum > max {
				max = sum
			}
		}
	}
	return max
}

func main() {
	fmt.Println(MaxSequence([]int{-2, 1, -3, 4, -1, 2, 1, -5, 4})) // 6
	fmt.Println(MaxSequence([]int{-2, -5, 6, -2, -3, 1, 5, -6}))   // 7
	fmt.Println(MaxSequence([]int{-2, -3, 4, -1, -2, 1, 5, -3}))   // 7
}
