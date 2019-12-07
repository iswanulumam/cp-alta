package main

import "fmt"

func ToRoman(value int) string {
	var number = []int{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1}
	var roman = []string{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"}

	var result string = ""
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
	fmt.Println("4     | IV       | ", ToRoman(4))
	fmt.Println("9     | IX       | ", ToRoman(9))
	fmt.Println("23    | XXIII    | ", ToRoman(23))
	fmt.Println("1453  | MCDLIII  | ", ToRoman(1453))
	fmt.Println("1646  | MDCXLVI  | ", ToRoman(1646))
}
