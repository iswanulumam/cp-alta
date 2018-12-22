package main

import "fmt"

func checkAB(str string) bool {
	for i, _ := range str {
		if string(str[i]) == "a" {
			if i >= 4 {
				if string(str[i-4]) == "b" {
					return true
				}
			}
			if i <= len(str)-3 {
				if string(str[i+4]) == "b" {
					return true
				}
			}
		}
	}
	return false
}

func main() {
	fmt.Println(checkAB("lane borrowed"))  // True
	fmt.Println(checkAB("i am sick"))      // False
	fmt.Println(checkAB("you are boring")) // True
	fmt.Println(checkAB("barbarian"))      // True
	fmt.Println(checkAB("bacon and meat")) // False
}
