package main

import "fmt"

func ChangeMe(arr [][]interface{}) {
	if len(arr) == 0 {
		fmt.Println("")
	} else {
		for _, val := range arr {
			dict := map[string]interface{}{}
			dict["firstName"] = val[0]
			dict["lastName"] = val[1]
			dict["gender"] = val[2]
			age := 2019 - val[3].(int)
			dict["age"] = age
			fmt.Println(dict)
		}
	}
}

func main() {
	ChangeMe([][]interface{}{
		{"Christ", "Evans", "Male", 1982},
		{"Robert", "Downey", "Male", 1994},
	})
}
