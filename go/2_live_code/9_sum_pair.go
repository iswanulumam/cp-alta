package main

import (
	"fmt"
)

func LinierSolution(arr []int, sum int) (interface{}, interface{}) {
	mapper := map[int]int{}
	for i, _ := range arr {
		sumMinus := sum - arr[i]
		if _, exist := mapper[sumMinus]; exist {
			return sumMinus, arr[i]
		}
		mapper[arr[i]] = arr[i]
		fmt.Println(mapper)
	}

	return "No", "Match"
}

func main() {
	fmt.Println(LinierSolution([]int{1, 4, 8, 7, 3, 15}, 8))   // [1, 7]
	fmt.Println(LinierSolution([]int{1, -2, 3, 0, -6, 1}, -6)) // [0, -6]
	fmt.Println(LinierSolution([]int{20, -13, 40}, -7))        // No Match
	fmt.Println(LinierSolution([]int{1, 2, 3, 4, 1, 0}, 2))    // [1, 1]
	fmt.Println(LinierSolution([]int{10, 5, 2, 3, 7, 5}, 10))  // [3, 7]
	fmt.Println(LinierSolution([]int{4, -2, 3, 3, 4}, 8))      // [4, 4]
	fmt.Println(LinierSolution([]int{0, 2, 0}, 0))             // [0, 0]
	fmt.Println(LinierSolution([]int{5, 9, 13, -3}, 10))       // [13, -3]
}
