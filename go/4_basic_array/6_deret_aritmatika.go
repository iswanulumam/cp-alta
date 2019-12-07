package main

import (
	"fmt"
	"math"
)

func DeretArtimatika(arr []int) bool {
	diff := math.Abs(float64(arr[0] - arr[1]))
	for i := 1; i < len(arr); i++ {
		if math.Abs(float64(arr[i]-arr[i-1])) != diff {
			return false
		}
	}
	return true
}

func main() {
	fmt.Println(DeretArtimatika([]int{1, 2, 3, 4, 5, 6})) // True
	fmt.Println(DeretArtimatika([]int{2, 4, 6, 12, 24}))  // False
	fmt.Println(DeretArtimatika([]int{2, 4, 6, 8}))       // True
	fmt.Println(DeretArtimatika([]int{2, 6, 18, 54}))     // False
	fmt.Println(DeretArtimatika([]int{1, 2, 3, 4, 7, 9})) // False
}
