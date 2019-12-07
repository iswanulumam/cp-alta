package main

import "fmt"

func FindNotRelative(arrayA, arrayB []int) []int {
	result := []int{}
	mapperB := map[int]bool{}

	for _, b := range arrayB {
		mapperB[b] = true
	}

	for _, a := range arrayA {
		key := a
		if _, exist := mapperB[key]; !exist {
			result = append(result, key)
		}
	}
	return result
}

func main() {
	fmt.Println(FindNotRelative([]int{3, 6, 10, 12, 15}, []int{1, 3, 5, 10, 16})) // [ 6, 12, 15]
	fmt.Println(FindNotRelative([]int{10, 20, 36, 59}, []int{5, 10, 15, 59}))     // [20, 36]
	fmt.Println(FindNotRelative([]int{1, 2, 3}, []int{2, 1, 3}))                  // []
}
