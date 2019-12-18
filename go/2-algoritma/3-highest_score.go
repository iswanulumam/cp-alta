package main

import "fmt"

type student struct {
	name  string
	score int
	class string
}

func HighestScore(students []student) map[string]student {
	result := map[string]student{}
	maxScore := map[string]int{}

	for _, std := range students {
		key := std.class
		if _, isExist := maxScore[key]; isExist {
			if std.score > maxScore[key] {
				maxScore[key] = std.score
				result[key] = std
			}
		} else {
			maxScore[key] = std.score
			result[key] = std
		}
	}

	return result
}

func main() {
	students1 := []student{
		{name: "Dimitri", score: 90, class: "foxes"},
		{name: "Alexei", score: 85, class: "wolves"},
		{name: "Sergei", score: 74, class: "foxes"},
		{name: "Anastasia", score: 78, class: "wolves"},
	}
	fmt.Println(HighestScore(students1))
	// map[foxes:{Dimitri 90 foxes} wolves:{Alexei 85 wolves}]

	students2 := []student{
		{name: "Alexander", score: 100, class: "foxes"},
		{name: "Alisa", score: 76, class: "wolves"},
		{name: "Vladimir", score: 92, class: "foxes"},
		{name: "Albert", score: 71, class: "wolves"},
		{name: "Viktor", score: 80, class: "tigers"},
	}
	fmt.Println(HighestScore(students2))
	// map[foxes:{Alexander 100 foxes} tigers:{Viktor 80 tigers} wolves:{Alisa 76 wolves}]
}
