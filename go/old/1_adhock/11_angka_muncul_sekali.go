package main

import (
	"fmt"
)

func munculSekali(angka string) []string {
	result := []string{}
	mapper := map[string]int{}

	for _, c := range angka {
		s := string(c)
		_, exist := mapper[s]
		if exist {
			mapper[s] += 1
		} else {
			mapper[s] = 1
		}
	}

	for _, c := range angka {
		s := string(c)
		if mapper[s] == 1 {
			result = append(result, s)
		}
	}

	return result
}

func main() {
	fmt.Println(munculSekali("1234123"))   // ['4']
	fmt.Println(munculSekali("76523752"))  // ['6', '3']
	fmt.Println(munculSekali("1122"))      // []
	fmt.Println(munculSekali("1122333"))   // []
	fmt.Println(munculSekali("112723335")) // ['7', '5']
	fmt.Println(munculSekali("112523337")) // ['5', '7']
}
