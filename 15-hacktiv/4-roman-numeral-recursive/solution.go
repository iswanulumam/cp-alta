package main

import "fmt"

func toRoman(value int, index int) string {
	var number = []int{1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000}
	roman := []string{"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"}
	if index == -1 {
		return ""
	} else if value >= number[index] {
		value -= number[index]
		return roman[index] + toRoman(value, index)
	} else {
		return "" + toRoman(value, index-1)
	}
}

func main() {
	fmt.Println("My totally sweet testing script\n")
	fmt.Println("input | expected | actual")
	fmt.Println("------|----------|--------")
	fmt.Println("4     | IV       | ", toRoman(4, 12))
	fmt.Println("9     | IX       | ", toRoman(9, 12))
	fmt.Println("23    | XXIII    | ", toRoman(23, 12))
	fmt.Println("1453  | MCDLIII  | ", toRoman(1453, 12))
	fmt.Println("1646  | MDCXLVI  | ", toRoman(1646, 12))
}
