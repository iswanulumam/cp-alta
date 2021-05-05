package main

import (
	"fmt"
)

func sorting(array []int) []int {
	for i := 0; i < len(array); i++ {
		minIndex := i
		for j := i + 1; j < len(array); j++ {
			if array[j] < array[minIndex] {
				minIndex = j
			}
		}
		array[i], array[minIndex] = array[minIndex], array[i]
	}
	return array
}

func getTotal(array []int) (int, int) {
	total := 0
	max := array[len(array)-1]
	for _, arr := range array {
		if arr == max {
			total += 1
		}
	}
	return max, total
}

func mostFrequentLargestNumbers(array []int) (int, int) {
	listSort := sorting(array)
	max, count := getTotal(listSort)
	return max, count
}

func main() {
	fmt.Println(mostFrequentLargestNumbers([]int{2, 8, 4, 6, 8, 5, 8, 4}))
	// "angka paling besar adalah 8 dan jumlah kemunculan sebanyak 3 kali"

	fmt.Println(mostFrequentLargestNumbers([]int{122, 122, 130, 100, 135, 100, 135, 150}))
	// "angka paling besar adalah 150 dan jumlah kemunculan sebanyak 1 kali"

	fmt.Println(mostFrequentLargestNumbers([]int{1, 1, 1, 1}))
	// "angka paling besar adalah 1 dan jumlah kemunculan sebanyak 4 kali"
}
