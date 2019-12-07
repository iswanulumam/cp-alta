package main

import (
	"fmt"
)

func MaxDifference(arr []int32) int32 {
	var max_diff int32 = -1
	sub_a := []int32{}
	for _, item_a := range arr {
		current_val := item_a
		sub_a = append(sub_a, item_a)
		for _, item_sub_a := range sub_a {
			var diff_val int32 = current_val - item_sub_a
			if diff_val > max_diff {
				max_diff = diff_val
			}
		}
	}
	if max_diff == 0 {
		return -1
	}
	return max_diff
}

func main() {
	fmt.Println(MaxDifference([]int32{2, 3, 10, 6, 4, 8, 1})) // 8
	fmt.Println(MaxDifference([]int32{7, 9, 5, 6, 3, 2}))     // 2
	fmt.Println(MaxDifference([]int32{10, 8, 7, 6, 5}))       // -1
	fmt.Println(MaxDifference([]int32{1, 2, 6, 4}))           // 5
}
