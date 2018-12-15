package main

import "fmt"

func bilanganTerbesarTiga(a int, b int, c int) int {
	maks := a
	if b > maks {
		maks = b
	}
	if c > maks {
		maks = c
	}
	return maks
}

func main() {
	fmt.Println(bilanganTerbesarTiga(1, 2, 3))       // 3
	fmt.Println(bilanganTerbesarTiga(10, 30, 20))    // 30
	fmt.Println(bilanganTerbesarTiga(17, 15, 17))    // 17
	fmt.Println(bilanganTerbesarTiga(79, 50, 20))    // 79
	fmt.Println(bilanganTerbesarTiga(200, 300, 400)) // 400
}
