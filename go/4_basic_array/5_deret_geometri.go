package main

import "fmt"

func DeretGeometri(arr []int) bool {
	divider := arr[1] / arr[0]
	for i := 1; i < len(arr); i++ {
		if arr[i] != arr[i-1]*divider {
			return false
		}
	}
	return true
}

func main() {
	fmt.Println(DeretGeometri([]int{1, 3, 9, 27, 81}))  // True
	fmt.Println(DeretGeometri([]int{2, 4, 8, 16, 32}))  // True
	fmt.Println(DeretGeometri([]int{2, 4, 6, 8}))       // False
	fmt.Println(DeretGeometri([]int{2, 6, 18, 54}))     // True
	fmt.Println(DeretGeometri([]int{1, 2, 3, 4, 7, 9})) // False
}
