package main

import (
	"fmt"
	"math"
)

func checkAB(str string) interface{} {
	pos_a := []int{}
	pos_b := []int{}
	jarak_3 := false

	for i, s := range str {
		if string(s) == "a" {
			pos_a = append(pos_a, i)
		}
		if string(s) == "b" {
			pos_b = append(pos_b, i)
		}
	}

	for _, a := range pos_a {
		for _, b := range pos_b {
			if math.Abs(float64(a-b)) == 4 {
				jarak_3 = true
			}
		}
	}

	return jarak_3
}

func main() {
	fmt.Println(checkAB("lane borrowed"))  // True
	fmt.Println(checkAB("i am sick"))      // False
	fmt.Println(checkAB("you are boring")) // True
	fmt.Println(checkAB("barbarian"))      // True
	fmt.Println(checkAB("bacon and meat")) // False
}
