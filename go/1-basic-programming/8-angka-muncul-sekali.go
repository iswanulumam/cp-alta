package main

import (
	"fmt"
	"strconv"
)

func munculSekali(angka string) []int {
	var result []int
	mapAngka := map[string]int{}

	for i := 0; i < len(angka); i++ {
		key := string(angka[i])
		_, exist := mapAngka[key]
		if !exist {
			mapAngka[key] = 1
		} else {
			mapAngka[key] += 1
		}
	}
	
	for i := 0; i < len(angka); i++ {
		key := string(angka[i])
		if mapAngka[key] == 1 {
			num, _ := strconv.Atoi(key)
			result = append(result, num)
		}
	}

	return result
}

func main() {
	fmt.Println(munculSekali("1234123")) // [4]
	fmt.Println(munculSekali("76523752")) // [6, 3]
}