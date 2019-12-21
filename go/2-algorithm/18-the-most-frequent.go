package main

import "fmt"

type pair struct {
	first  string
	second int
}

func sortingPair(array []pair) {
	for i := 0; i < len(array); i++ {
		minIndex := i
		for j := i + 1; j < len(array); j++ {
			if array[j].second < array[minIndex].second {
				minIndex = j
			}
		}
		array[i], array[minIndex] = array[minIndex], array[i]
	}
}

func mostFrequentItem(items []string) []pair {
	mapItem := map[string]int{}
	for _, item := range items {
		key := item
		_, exist := mapItem[key]
		if exist {
			mapItem[key]++
		} else {
			mapItem[key] = 1
		}
	}

	itemsPair := []pair{}
	for key, value := range mapItem {
		newPair := pair{
			first:  key,
			second: value,
		}
		itemsPair = append(itemsPair, newPair)
	}
	sortingPair(itemsPair)
	return itemsPair
}

func main() {
	fmt.Println(mostFrequentItem([]string{"asus", "asus", "samsung", "iphone", "iphone", "asus", "asus"}))
	// "samsung(1), iphone(2), asus(4)"
	fmt.Println(mostFrequentItem([]string{"9", "b", "b", "c", "9", "9", "b", "9", "2", "2"}))
	// "c(1), 2(2), b(3), 9(4)"
	fmt.Println(mostFrequentItem([]string{"book", "laptop", "iPod"}))
	// "book(1), laptop(1), iPod(1)"
}
