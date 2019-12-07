package main

import (
	"fmt"
)

func MissingInteger(array []int) int {
	number := [1000]bool{}
	number[0] = true
	for _, a := range array {
		if a > 0 {
			number[a] = true
		}
	}
	result := 0
	for i := 1; i < len(number); i++ {
		if number[i] == false {
			result = i
			break
		}
	}
	return result
}

func main() {
	fmt.Println(MissingInteger([]int{1, 2, 3, 4, 5}))          // 6
	fmt.Println(MissingInteger([]int{0, -10, 1, 3, -20}))      // 2
	fmt.Println(MissingInteger([]int{1, 3, 6, 4, 1, 2}))       // 5
	fmt.Println(MissingInteger([]int{1, 2, 3}))                // 4
	fmt.Println(MissingInteger([]int{-1, -3}))                 // 1
	fmt.Println(MissingInteger([]int{1, 3, 6, 4, 1, 2}))       // 5
	fmt.Println(MissingInteger([]int{1, 2, 3}))                // 4
	fmt.Println(MissingInteger([]int{-1, -3}))                 // 1
	fmt.Println(MissingInteger([]int{-1, -3, -2, -3, 1, 100})) // 2
}
