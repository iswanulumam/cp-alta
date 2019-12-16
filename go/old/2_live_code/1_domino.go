package main

import (
	"fmt"
)

func checkCard(card []int, deck []int) (totalCard int, match bool) {
	var total int = card[0] + card[1]
	for _, c := range card {
		for _, d := range deck {
			if c == d {
				return total, true
			}
		}
	}
	return total, false
}

func dominoCard(cards [][]int, deck []int) interface{} {
	result := []int{}
	maksCard := -1
	for _, card := range cards {
		totalCard, match := checkCard(card, deck)
		if match && totalCard > maksCard {
			maksCard = totalCard
			result = card
		}
	}
	if len(result) == 0 {
		return "tutup 1 kartu"
	}
	return result
}

func main() {
	fmt.Println(dominoCard([][]int{[]int{3, 3}, []int{6, 5}, []int{3, 4}, []int{2, 1}}, []int{3, 5}))
	// "keluarkan kartu [6,5]"
	fmt.Println(dominoCard([][]int{[]int{3, 3}, []int{6, 5}, []int{3, 4}, []int{2, 1}}, []int{1, 3}))
	// "keluarkan kartu [3,4]"
	fmt.Println(dominoCard([][]int{[]int{2, 4}, []int{6, 6}, []int{3, 6}}, []int{1, 5}))
	// "tutup 1 kartu"
}
