package main

import "fmt"

func SelectionSort(array []int) {
	for i := 0; i < len(array); i++ {
		minIndex := i
		for j := i + 1; j < len(array); j++ {
			if array[j] < array[minIndex] {
				minIndex = j
			}
		}
		array[i], array[minIndex] = array[minIndex], array[i]
	}
}

func HowManyGifts(maxBudged int, gifts []int) {
	SelectionSort(gifts)
	totalGift := 0
	for _, gift := range gifts {
		if maxBudged >= gift {
			totalGift += 1
			maxBudged -= gift
		}
	}
	fmt.Println(totalGift)
}

func main() {
	HowManyGifts(30000, []int{15000, 12000, 5000, 3000, 10000})     // 4
	HowManyGifts(10000, []int{2000, 2000, 3000, 1000, 2000, 10000}) // 5
	HowManyGifts(4000, []int{7500, 1500, 2000, 3000})               // 2
	HowManyGifts(50000, []int{25000, 25000, 10000, 15000})          // 3
	HowManyGifts(0, []int{10000, 3000})                             // 0
}
