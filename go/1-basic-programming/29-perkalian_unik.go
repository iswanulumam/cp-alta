package main

import (
	"fmt"
)

func PerkalianUnik(arr []int) []int {
	total := 1
	result := []int{}
	for _, a := range arr {
		total *= a
	}
	for _, a := range arr {
		result = append(result, total/a)
	}
	return result
}

func main() {
	fmt.Println(PerkalianUnik([]int{2, 4, 6}))        // [24, 12, 8]
	fmt.Println(PerkalianUnik([]int{1, 2, 3, 4, 5}))  // [120, 60, 40, 30, 24]
	fmt.Println(PerkalianUnik([]int{1, 4, 3, 2, 5}))  // [120, 30, 40, 60, 24]
	fmt.Println(PerkalianUnik([]int{1, 3, 3, 1}))     // [9, 3, 3, 9]
	fmt.Println(PerkalianUnik([]int{2, 1, 8, 10, 2})) // [160, 320, 40, 32, 160]
}
