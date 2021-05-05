package main

import (
	"fmt"
	"strings"
)

func virusCheck(inputString, viruses string) int {
	inputString = strings.ToLower(inputString)
	mapVirus := map[string]bool{}

	for _, virus := range viruses {
		newVirus := string(virus)
		if newVirus != "|" {
			mapVirus[newVirus] = true
		}
	}

	var totalVirus int = 0
	for _, is := range inputString {
		var value string = string(is)
		_, exist := mapVirus[value]
		if exist {
			totalVirus += 1
		}
	}
	return totalVirus
}

func main() {
	fmt.Println(virusCheck("qlD4MZax0raQqew", "x|0|q"))
	// 5 viruses detected
	fmt.Println(virusCheck("HH0NBP1zRa", "h|r"))
	// 3 viruses detected
	fmt.Println(virusCheck("4O4TmIF6ONaiMlzpXxPqwy", "4|X|p"))
	// 6 viruses detected
	fmt.Println(virusCheck("mjBgPlzks", "m"))
	// 1 virus detected
	fmt.Println(virusCheck("AIn4Ks05bBaa", "x"))
	// No virus detected
	fmt.Println(virusCheck("RsMFjBUjvIaP", ""))
	// No virus detected
	fmt.Println(virusCheck("", ""))
	// No virus detected
}
