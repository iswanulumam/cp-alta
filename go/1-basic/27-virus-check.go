package main

import (
	"fmt"
)

func virusCheck(inputString, viruses string) string {

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
	fmt.Println(virusCheck("RsMFjBUjvIaP"))
	// No virus detected
	fmt.Println(virusCheck(""))
	// No virus detected
}
