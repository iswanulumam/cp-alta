package main

import (
	"fmt"
	"strconv"
)

func KonversiMenit(menit int) string {
	a := strconv.FormatInt(int64(menit/60), 10)
	b := strconv.FormatInt(int64(menit%60), 10)
	if len([]rune(b)) > 1 {
		return a + ":" + b
	} else {
		return a + ":0" + b
	}
}

func main() {
	fmt.Println(KonversiMenit(63))  // 1:03
	fmt.Println(KonversiMenit(124)) // 2:04
	fmt.Println(KonversiMenit(53))  // 0:53
	fmt.Println(KonversiMenit(88))  // 1:28
	fmt.Println(KonversiMenit(120)) // 2:00
}
