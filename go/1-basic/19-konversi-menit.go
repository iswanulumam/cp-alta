package main

import (
	"fmt"
	"strconv"
)

func konversiMenit(number int) string {
	var (
		minute     string = ""
		secound    string = ""
		timeResult string = ""
	)

	minute = strconv.Itoa(number / 60)
	secound = strconv.Itoa(number % 60)
	if len(secound) < 2 {
		secound = "0" + secound
	}
	timeResult = minute + ":" + secound
	return timeResult
}

func main() {
	fmt.Println(konversiMenit(63))  // 1:03
	fmt.Println(konversiMenit(124)) // 2:04
	fmt.Println(konversiMenit(53))  // 0:53
	fmt.Println(konversiMenit(88))  // 1:28
	fmt.Println(konversiMenit(120)) // 2:00
}
