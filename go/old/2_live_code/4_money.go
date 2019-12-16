package main

import (
	"fmt"
)

func Find(a []int, x int) int {
	for i, n := range a {
		if x == n {
			return i
		}
	}
	return len(a)
}

func MoneyExchanger(change int, priority int) interface{} {
	pecahanUang := []int{50000, 20000, 10000, 5000, 2000, 1000}
	qtyPecahanUang := []int{2, 3, 5, 8, 6, 10}
	result := []int{}

	idxStart := 0
	if priority != 0 {
		idxStart = Find(pecahanUang, priority)
	}

	totalPecahan := len(pecahanUang)
	for i := idxStart; i < totalPecahan; i++ {
		for change >= pecahanUang[i] && qtyPecahanUang[i] > 0 {
			result = append(result, pecahanUang[i])
			change -= pecahanUang[i]
			qtyPecahanUang[i] -= 1
		}
	}
	if change == 0 {
		return result
	} else {
		return "'Uang pecahan tidak mencukupi'"
	}
}

func main() {
	fmt.Println(MoneyExchanger(100000, 0))
	// hasilnya : [ 50000, 50000 ]

	fmt.Println(MoneyExchanger(100000, 20000))
	// hasilnya : [ 20000, 20000, 20000, 10000, 10000, 10000, 10000 ]

	fmt.Println(MoneyExchanger(100000, 5000))
	// hasilnya : Uang pecahan tidak mencukupi
}
