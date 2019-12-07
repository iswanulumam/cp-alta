package main

import (
	"fmt"
)

type report struct {
	memberId      string
	money         int
	listPurchased []string
	changeMoney   int
}

func ShoppingTime(memberId string, money int) report {

	items := [][]interface{}{
		{"Sepatu Stacattu", 1500000},
		{"Baju Zoro", 500000},
		{"Baju H&N", 250000},
		{"Sweater Uniklooh", 175000},
		{"Casing Handphone", 50000},
	}

	receip := report{}

	receip.memberId = memberId
	receip.money = money

	redudance := money
	for _, item := range items {
		if redudance >= item[1].(int) {
			receip.listPurchased = append(receip.listPurchased, item[0].(string))
			redudance = redudance - item[1].(int)
		}
	}

	receip.changeMoney = redudance
	return receip
}

func main() {
	fmt.Println(ShoppingTime("1820RzKrnWn08", 2475000))
	/*
		{ memberId: "1820RzKrnWn08",
		 money: 2475000,
		 listPurchased:
		  [ "Sepatu Stacattu",
		    "Baju Zoro",
		    "Baju H&N",
		    "Sweater Uniklooh",
		    "Casing Handphone" ],
		 changeMoney: 0 }
	*/
	fmt.Println(ShoppingTime("82Ku8Ma742", 170000))
	/*
		{ memberId: "82Ku8Ma742",
		 money: 170000,
		 listPurchased:
		  [ "Casing Handphone" ],
		 changeMoney: 120000 }
	*/
}
