package main

import (
	"fmt"
	"strconv"
)

func DigitPerkalianMinimum(N int) int {
	result := 0
	minValue := 999
	for i := 1; i <= N; i++ {
		if N%i == 0 {
			str1 := strconv.FormatInt(int64(i), 10)
			str2 := strconv.FormatInt(int64(N/i), 10)
			var lenStr string = str1 + str2
			if len([]rune(lenStr)) < minValue {
				result = len([]rune(lenStr))
				minValue = len([]rune(lenStr))
			}
		}
	}
	return result

}

func main() {
	fmt.Println(DigitPerkalianMinimum(24))  // 2
	fmt.Println(DigitPerkalianMinimum(90))  // 3
	fmt.Println(DigitPerkalianMinimum(20))  // 2
	fmt.Println(DigitPerkalianMinimum(179)) // 4
	fmt.Println(DigitPerkalianMinimum(1))   // 2
}
