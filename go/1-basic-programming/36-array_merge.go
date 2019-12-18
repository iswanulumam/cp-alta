package main

import "fmt"

func ArrayMerge(arrayA, arrayB []string) []string {
	merge := []string{}

	for _, a := range arrayA {
		merge = append(merge, a)
	}
	for _, b := range arrayB {
		merge = append(merge, b)
	}

	mapper := map[string]string{}
	result := []string{}

	for _, val := range merge {
		if _, exist := mapper[val]; !exist {
			mapper[val] = val
			result = append(result, mapper[val])
		}
	}

	return result
}

func main() {
	// Test cases
	fmt.Println(ArrayMerge([]string{"king", "devil jin", "akuma"}, []string{"eddie", "steve", "geese"}))
	// ["king", "devil jin", "akuma", "eddie", "steve", "geese"]

	fmt.Println(ArrayMerge([]string{"sergei", "jin"}, []string{"jin", "steve", "bryan"}))
	// ["sergei", "jin", "steve", "bryan"]

	fmt.Println(ArrayMerge([]string{"alisa", "yoshimitsu"}, []string{"devil jin", "yoshimitsu", "alisa", "law"}))
	// ["alisa", "yoshimitsu", "devil jin", "law"]

	fmt.Println(ArrayMerge([]string{}, []string{"devil jin", "sergei"}))
	// ["devil jin", "sergei"]

	fmt.Println(ArrayMerge([]string{"hwoarang"}, []string{}))
	// ["hwoarang"]

	fmt.Println(ArrayMerge([]string{}, []string{}))
	// []
}
