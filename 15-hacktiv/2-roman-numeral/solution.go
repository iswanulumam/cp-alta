package main

import "fmt"

func toRoman(value int) string {
	number := []int{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}
	roman := []string{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"}

	result := ""
	for i := 0; i < len(number); i++ {
		for value >= number[i] {
			result += roman[i]
			value -= number[i]
		}
	}
	return result
}

func main() {
	fmt.Println("My totally sweet testing script")
	fmt.Println("input | expected | actual")
	fmt.Println("------|----------|--------")
	fmt.Println("4     | IV       | ", toRoman(4))
	fmt.Println("9     | IX       | ", toRoman(9))
	fmt.Println("23    | XXIII    | ", toRoman(23))
	fmt.Println("1453  | MCDLIII  | ", toRoman(1453))
	fmt.Println("1646  | MDCXLVI  | ", toRoman(1646))
}
