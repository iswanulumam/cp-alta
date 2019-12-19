package main

import (
	"fmt"
	"strings"
)

func uniqueFinder(sentence string) []string {
	var unique []string
	listSentence := strings.Split(sentence, " ")
	mapper := map[string]bool{}

	for _, value := range listSentence {
		lowerValue := strings.ToLower(value)
		_, exist := mapper[lowerValue]
		if !exist {
			unique = append(unique, lowerValue)
		}
		mapper[value] = true
	}

	return unique
}

func main() {
	fmt.Println(uniqueFinder("hello black dragon and hello red dragon"))
	// ['hello', 'black', 'dragon', 'and', 'red']
	fmt.Println(uniqueFinder("hello HELLo hEllO hlloe"))
	// ['hello', 'hlloe']
	fmt.Println(uniqueFinder("john is coding and he is coding"))
	// ['john', 'is', 'coding', 'and', 'he']
	fmt.Println(uniqueFinder("blue blue red blue violet red violet"))
	// ['blue', 'red', 'violet']
}