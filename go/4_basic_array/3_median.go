package main

import (
	"fmt"
)

func Median(arr []float64) float64 {
	result := 0.
	N := len(arr)
	if len(arr)%2 != 0 {
		result = arr[N/2]
	} else {
		result = (arr[N/2-1] + arr[N/2]) / 2
	}
	return result
}

func main() {
	fmt.Println(Median([]float64{1, 2, 3, 4, 5}))       // 3
	fmt.Println(Median([]float64{1, 3, 4, 10, 12, 13})) // 7
	fmt.Println(Median([]float64{3, 4, 7, 6, 10}))      // 7
	fmt.Println(Median([]float64{1, 3, 3}))             // 3
	fmt.Println(Median([]float64{7, 7, 8, 8}))          // 7.5
}
