package main

import "fmt"

func ConvertToCoin(money int) []int {
	coins := []int{1, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000}
	var result []int
	for i := len(coins) - 1; i >= 0; i-- {
		for money >= coins[i] {
			result = append(result, coins[i])
			money -= coins[i]
		}
	}
	return result
}

func main() {
	fmt.Println(ConvertToCoin(543))
	// output : [ 500, 20, 20, 1, 1, 1 ]
	fmt.Println(ConvertToCoin(7752))
	// output : [ 5000, 2000, 500, 200, 50, 1, 1 ]
	fmt.Println(ConvertToCoin(37454))
	// [ 10000, 10000, 10000, 5000, 2000, 200, 200, 50, 1, 1, 1, 1 ]
}
