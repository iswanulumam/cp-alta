package main

import (
	"fmt"
	"sort"
)

func GroupingAnimal(animals []string) [][]string {
	sort.Strings(animals)
	result := [][]string{}

	mark := string([]rune(animals[0])[0])

	grouped := []string{}
	for _, animal := range animals {
		curMark := string(animal[0])
		if curMark == mark {
			grouped = append(grouped, animal)
		} else {
			result = append(result, grouped)
			grouped = []string{}
			grouped = append(grouped, animal)
			mark = string(animal[0])
		}
	}
	result = append(result, grouped)
	return result
}

func main() {
	fmt.Println(GroupingAnimal([]string{"cacing", "ayam", "kuda", "anoa", "kancil"}))
	// [['ayam', 'anoa'], ['cacing'], ['kuda', 'kancil'] ]
	fmt.Println(GroupingAnimal([]string{"cacing", "ayam", "kuda", "anoa", "kancil", "unta", "cicak"}))
	// [['anoa', 'ayam'], ['cacing', 'cicak'], ['kancil', 'kuda'], ['unta]]
}
