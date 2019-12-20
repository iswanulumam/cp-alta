package main

import (
	"fmt"
)

func statistik(kata string, arr1, arr2 []int) (int, int) {
	var (
		value1 int = arr1[0]
		value2 int = arr2[0]
	)

	switch kata {
	case "min":
		for _, a1 := range arr1 {
			if a1 < value1 {
				value1 = a1
			}
		}
		for _, a2 := range arr2 {
			if a2 < value2 {
				value2 = a2
			}
		}
	case "max":
		for _, a1 := range arr1 {
			if a1 > value1 {
				value1 = a1
			}
		}
		for _, a2 := range arr2 {
			if a2 > value2 {
				value2 = a2
			}
		}
	}

	return value1, value2
}

func main() {
	fmt.Println(statistik("min", []int{1, 1, 1}, []int{8, 15, 17, 9}))           // 1 8
	fmt.Println(statistik("max", []int{4, 8, 9, 12}, []int{33, 88, 99, 11}))     // 12 99
	fmt.Println(statistik("min", []int{1, 2, 5, 2, 2}, []int{67, 45, 55}))       // 1 45
	fmt.Println(statistik("max", []int{6, 2, 4, 10, 8, 2}, []int{6, 5, 13, 23})) // 10 23
	fmt.Println(statistik("min", []int{5, 11, 18, 6}, []int{3, 1, 8, 13}))       // 5 1
}
