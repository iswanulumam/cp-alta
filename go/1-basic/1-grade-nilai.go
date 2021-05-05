package main

import(
	"fmt"
)

func main() {
	var studentScore int = 80
	// var alphabet string = "SEPULSA OKE"
	// fmt.Scan(&studentScore)

	// Your Solution Code Here
	if studentScore < 0 || studentScore > 100 {
		fmt.Println("Nilai Invalid")
	} else if studentScore >= 80 {
		fmt.Println("Nilai A")
	} else if studentScore >= 65 {
		fmt.Println("Nilai B")
	} else if studentScore >= 50 {
		fmt.Println("Nilai C")
	} else if studentScore >= 35 {
		fmt.Println("Nilai D")
	} else if studentScore >= 0 {
		fmt.Println("Nilai E")
	}

	// Output
	// Nilai A

	fmt.Println(studentScore)
}