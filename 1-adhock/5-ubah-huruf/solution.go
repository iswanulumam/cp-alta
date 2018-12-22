package main

import "fmt"

func ubahHuruf(str string) string {
	var result string
	for _, s := range str {
		if string(s) == "z" {
			result += "a"
		} else {
			result += string(s + 1)
		}
	}
	return result
}

func main() {
	// Driver Code
	fmt.Println(ubahHuruf("wow"))       // xpx
	fmt.Println(ubahHuruf("developer")) // efwfmpqfs
	fmt.Println(ubahHuruf("keren"))     // lfsfo
	fmt.Println(ubahHuruf("semangat"))  // tfnbohbu
}
