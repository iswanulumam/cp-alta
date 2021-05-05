package main

import (
	"fmt"
	"math"
	"strconv"
)

func Prima(N int) bool {
	if N < 2 {
		return false
	}
	for i := 2; i <= int(math.Sqrt(float64(N))); i++ {
		if N%i == 0 {
			return false
		}
	}
	return true
}

func FullPrima(N int) string {
	digitPrima := map[int]bool{
		2: true,
		3: true,
		5: true,
		7: true,
	}
	if !Prima(N) {
		return "Tidak"
	}
	str := strconv.Itoa(N)
	for _, s := range str {
		val, _ := strconv.Atoi(string(s))
		if _, exist := digitPrima[val]; !exist {
			return "Tidak"
		}
	}
	return "Ya"
}

func main() {
	fmt.Println(FullPrima(2))  // Ya
	fmt.Println(FullPrima(3))  // Ya
	fmt.Println(FullPrima(11)) // Tidak
	fmt.Println(FullPrima(13)) // Tidak
	fmt.Println(FullPrima(23)) // Ya
	fmt.Println(FullPrima(29)) // Tidak
	fmt.Println(FullPrima(37)) // Ya
	fmt.Println(FullPrima(41)) // Tidak
	fmt.Println(FullPrima(43)) // Tidak
	fmt.Println(FullPrima(53)) // Ya
}
