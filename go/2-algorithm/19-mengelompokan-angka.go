package main

import (
	"fmt"
)

func mengelompokkanAngka(number []int) [][]int {
	result := [][]int{}

	result = append(result, []int{})
	result = append(result, []int{})
	result = append(result, []int{})

	for _, value := range number {
		if value%3 == 0 {
			result[2] = append(result[2], value)
		} else if value%2 == 0 {
			result[0] = append(result[0], value)
		} else if value%2 == 1 {
			result[1] = append(result[1], value)
		}
	}

	return result
}

func main() {
	// Driver Code
	fmt.Println(mengelompokkanAngka([]int{2, 4, 6}))
	// [ [2, 4], [], [6] ]
	fmt.Println(mengelompokkanAngka([]int{1, 2, 3, 4, 5, 6, 7, 8, 9}))
	// [ [ 2, 4, 8 ], [ 1, 5, 7 ], [ 3, 6, 9 ] ]
	fmt.Println(mengelompokkanAngka([]int{100, 151, 122, 99, 111}))
	// [ [ 100, 122 ], [ 151 ], [ 99, 111 ] ]

}
