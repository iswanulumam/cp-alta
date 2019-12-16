package main

import (
	"fmt"
	"strings"
)

func uniqueFinder(sentence string) interface{} {

	lowerSentence := strings.ToLower(sentence)
	arrayWord := strings.Split(lowerSentence, " ")
	mapper := map[string]bool{}
	result := []string{}

	for _, word := range arrayWord {
		if _, ok := mapper[word]; !ok {
			result = append(result, word)
			mapper[word] = true
		}
	}

	if sentence == "" {
		return "NO WORDS"
	}
	return result
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
	fmt.Println(uniqueFinder(""))
	// 'NO WORDS'
}
