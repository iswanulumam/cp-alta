package main

import (
	"fmt"
	"math"
)

func CariMean(arr []int) float64 {
	total := 0.
	for _, a := range arr {
		total += float64(a)
	}
	result := total / float64(len(arr))
	return math.Round(result)
}

func main() {
	fmt.Println(CariMean([]int{1, 2, 3, 4, 5})) // 3
	fmt.Println(CariMean([]int{3, 5, 7, 5, 3})) // 5
	fmt.Println(CariMean([]int{6, 5, 4, 7, 3})) // 5
	fmt.Println(CariMean([]int{1, 3, 3}))       // 2
	fmt.Println(CariMean([]int{7, 7, 7, 7, 7})) // 7
}
