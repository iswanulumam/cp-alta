package main

import (
	"fmt"
	"strconv"
	"strings"
)

func Max(v []int) int {
	var m int
	for i, e := range v {
		if i == 0 || e > m {
			m = e
		}
	}
	return m
}

func GenerateBarChart(value []int) {
	maxBar := Max(value)
	for i := maxBar; i > 0; i-- {
		line := strconv.Itoa(i) + "|"
		for j := 0; j < len(value); j++ {
			if value[j] >= maxBar {
				line += " III "
			} else {
				line += "     "
			}
		}
		if i == 1 {
			valueStr := strings.Trim(strings.Join(strings.Fields(fmt.Sprint(value)), ")--("), "[]")
			line += "\n0|-(" + valueStr + ")-"
		}
		fmt.Println(line)
		maxBar -= 1
	}
}

func main() {
	GenerateBarChart([]int{3, 6, 4, 7, 2})
	fmt.Println()
	/*
		7|                III
		6|      III       III
		5|      III       III
		4|      III  III  III
		3| III  III  III  III
		2| III  III  III  III  III
		1| III  III  III  III  III
		0|-(3)--(6)--(4)--(7)--(2)-
	*/

	GenerateBarChart([]int{9, 8, 7, 0, 1, 2, 3})
	fmt.Println()
	/*
		9| III
		8| III  III
		7| III  III  III
		6| III  III  III
		5| III  III  III
		4| III  III  III
		3| III  III  III                 III
		2| III  III  III            III  III
		1| III  III  III       III  III  III
		0|-(9)--(8)--(7)--(0)--(1)--(2)--(3)-
	*/

	GenerateBarChart([]int{1, 2, 3, 4, 5, 4, 3, 2, 1})
	fmt.Println()
	/*
		5|                     III
		4|                III  III  III
		3|           III  III  III  III  III
		2|      III  III  III  III  III  III  III
		1| III  III  III  III  III  III  III  III  III
		0|-(1)--(2)--(3)--(4)--(5)--(4)--(3)--(2)--(1)-
	*/
}
