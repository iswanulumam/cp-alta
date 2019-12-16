package main

import "fmt"

func Reverse(numbers []int) []int {
	for i := 0; i < len(numbers)/2; i++ {
		j := len(numbers) - i - 1
		numbers[i], numbers[j] = numbers[j], numbers[i]
	}
	return numbers
}

func Modus(arr []int) int {
	mapper := map[int]int{}
	var modusKey int
	modusValue := -999999

	arr = Reverse(arr)
	for _, a := range arr {
		key := a
		if _, exist := mapper[key]; exist {
			mapper[key] += 1
			if mapper[key] >= modusValue {
				modusValue = mapper[key]
				modusKey = key
			}
		} else {
			mapper[key] = 1
		}
	}

	if modusKey == 0 || len(mapper) == 1 {
		return -1
	}
	return modusKey
}

func main() {
	fmt.Println(Modus([]int{10, 4, 5, 2, 4}))   // 4
	fmt.Println(Modus([]int{5, 10, 5, 6, 10}))  // 5
	fmt.Println(Modus([]int{10, 3, 1, 2, 5}))   // -1
	fmt.Println(Modus([]int{1, 2, 3, 3, 4, 5})) // 3
	fmt.Println(Modus([]int{7, 7, 7, 7, 7}))    // -1
}
