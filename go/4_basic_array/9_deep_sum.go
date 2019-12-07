package main

import "fmt"

func DeepSum(arr [][][]int) int {
	total := 0

	for _, a := range arr {
		for _, b := range a {
			for _, c := range b {
				total += c
			}
		}
	}
	return total
}

func main() {
	fmt.Println(DeepSum([][][]int{
		{
			[]int{4, 5, 6},
			[]int{9, 1, 2, 10},
			[]int{9, 4, 3},
		},
		{
			[]int{4, 14, 31},
			[]int{9, 10, 18, 12, 20},
			[]int{1, 4, 90},
		},
		{
			[]int{2, 5, 10},
			[]int{3, 4, 5},
			[]int{2, 4, 5, 10},
		},
	})) // 316
}
