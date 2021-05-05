package main

import (
	"fmt"
	"sort"
)

func InitialGroupDesc(students []string) [][]string {
	sort.Strings(students)
	result := [][]string{}

	mark := string([]rune(students[0])[0])

	grouped := []string{}
	for _, student := range students {
		curMark := string(student[0])
		if curMark == mark {
			if len(grouped) == 0 {
				grouped = append(grouped, curMark)
			}
			grouped = append(grouped, student)
		} else {
			result = append(result, grouped)
			grouped = []string{}
			if len(grouped) == 0 {
				grouped = append(grouped, curMark)
			}
			grouped = append(grouped, student)
			mark = string(student[0])
		}
	}
	result = append(result, grouped)
	return result
}

func main() {
	fmt.Println(InitialGroupDesc([]string{"Budi", "Badu", "Joni", "Jono"}))
	/*
		[
		[ "J", "Joni", "Jono" ],
		[ "B", "Budi", "Badu" ]
		]
	*/

	fmt.Println(InitialGroupDesc([]string{"Mickey", "Yusuf", "Donald", "Ali", "Gong"}))
	/*
		[
		[ "Y", "Yusuf" ],
		[ "M", "Mickey" ],
		[ "G", "Gong" ],
		[ "D", "Donald" ],
		[ "A", "Ali" ]
		]
	*/

	fmt.Println(InitialGroupDesc([]string{"Rock", "Stone", "Brick", "Rocker", "Sticker"}))
	/*
		[
		[ "S", "Stone", "Sticker" ],
		[ "R", "Rock", "Rocker" ],
		[ "B", "Brick" ]
		]
	*/
}
