package main

import (
	"fmt"
)

func RemoveString(str, ch string) string {
	newstring := ""
	for j, _ := range str {
		if string(str[j]) == ch {
			newstring += string(str[j+1:])
			break
		}
		newstring += string(str[j])
	}
	return newstring
}

func StringAcak(S1, S2 string) bool {
	if S1 == S2 {
		return false
	}
	for _, c := range S1 {
		S2 = RemoveString(S2, string(c))
	}
	if len(S2) > 0 {
		return false
	}
	return true
}

func main() {
	fmt.Println(RemoveString("aaabab", "b"))
	fmt.Println(StringAcak("malang", "agmlan"))   // True
	fmt.Println(StringAcak("alterra", "rerlata")) // True
	fmt.Println(StringAcak("alterra", "terlata")) // False
	fmt.Println(StringAcak("python", "nothyd"))   // False
	fmt.Println(StringAcak("python", "nothyp"))   // True
	fmt.Println(StringAcak("python", "python"))   // True
}
