package main

import (
	"fmt"
)

func main() {
	for i := 1; i <= 8; i++ {
		line := ""
		for j := 1; j <= 8; j++ {
			if i%2 != 0 {
				if j%2 == 0 {
					line += "#"
				} else {
					line += " "
				}
			} else {
				if j%2 == 0 {
					line += " "
				} else {
					line += "#"
				}
			}
		}
		fmt.Println(line)
	}
}
