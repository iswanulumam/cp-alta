package main

import "fmt"

func bandingkanAngka(a int, b int) interface{} {
	if b > a {
		return true
	} else if a == b {
		return -1
	}
	return false
}

func main() {
	// Driver Code
	fmt.Println(bandingkanAngka(5, 8))  // True
	fmt.Println(bandingkanAngka(5, 3))  // False
	fmt.Println(bandingkanAngka(4, 4))  // -1
	fmt.Println(bandingkanAngka(3, 3))  // -1
	fmt.Println(bandingkanAngka(17, 2)) // False
}
