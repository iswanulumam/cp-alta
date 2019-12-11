package main

import(
	"fmt"
)

func CheckUniqueNumber(number int) bool {
	var (
		primes = [3]int{2, 3, 5}
		divider int
	)

	for {
		if number % primes[divider] == 0 {
			number = number / primes[divider]
		} else {
			divider++
		}

		if number == 1 || divider == 3 {
			break
		}
	}

	if number == 1 {
		return true
	}
	return false
}

func GenerateUnik(maks int) {
	for i := 2; i <= maks; i++ {
		if CheckUniqueNumber(i) {
			fmt.Print(i, " ")
		}
	}
	fmt.Println()
}

func main() {
	GenerateUnik(10) // 2 3 4 5 6 8 9 10
	GenerateUnik(20) // 2 3 4 5 6 8 9 10 12 15 16 18 20
	GenerateUnik(4) // 2 3 4
	GenerateUnik(1) //
	GenerateUnik(30) // 2 3 4 5 6 8 9 10 12 15 16 18 20 24 25 27 30
}