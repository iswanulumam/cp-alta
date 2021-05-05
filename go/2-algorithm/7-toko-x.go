package main

import (
	"fmt"
)

type shop struct {
	product     string
	shoppers    []string
	leftOver    int
	totalProfit int
}

type shoppers struct {
	name    string
	product string
	amount  int
}

func CountProfit(shoppers []shoppers) []shop {
	listBarang := [][]interface{}{
		{"Sepatu Stacattu", 1500000, 10},
		{"Baju Zoro", 500000, 2},
		{"Sweater Uniklooh", 175000, 1},
	}

	result := []shop{}

	for _, lb := range listBarang {
		name := lb[0].(string)
		price := lb[1].(int)
		qty := lb[2].(int)

		sp := shop{}
		sp.product = name
		sp.leftOver = qty
		sp.totalProfit = 0

		for _, shopper := range shoppers {
			if shopper.product == name && qty >= shopper.amount {
				sp.shoppers = append(sp.shoppers, shopper.name)
				sp.leftOver -= shopper.amount
				sp.totalProfit += (price * shopper.amount)
			}
		}
		result = append(result, sp)
	}
	return result
}

func main() {
	shoppers := []shoppers{
		{name: "Windi", product: "Sepatu Stacattu", amount: 2},
		{name: "Vanessa", product: "Sepatu Stacattu", amount: 3},
		{name: "Rani", product: "Sweater Uniklooh", amount: 2},
	}
	fmt.Println(CountProfit(shoppers))
	// [ { 'product': 'Sepatu Stacattu', shoppers: [ 'Windi', 'Vanessa' ], leftOver: 5, totalProfit: 7500000 },
	//	 { 'product': 'Baju Zoro', shoppers: [], leftOver: 2, totalProfit: 0 },
	//   { 'product': 'Sweater Uniklooh', shoppers: [], leftOver: 1, totalProfit: 0 } ]
}
