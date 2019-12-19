package main

import "fmt"

type student struct {
	name  string
	score int
	class string
}

func Graduate(students []student) map[string][]student {
	result := map[string][]student{}
	for _, student := range students {
		if student.score >= 75 {
			key := student.class
			_, exist := result[key]
			if !exist {
				result[key] = append(result[key], student)
			} else {
				result[key] = append(result[key], student)
			}
		}
	}
	return result
}

func main() {
	students := []student{
		{name: "Dimitri", score: 90, class: "foxes"},
		{name: "Alexei", score: 85, class: "wolves"},
		{name: "Sergei", score: 74, class: "foxes"},
		{name: "Anastasia", score: 78, class: "wolves"},
	}
	fmt.Println(Graduate(students))
	// map[foxes:[{Dimitri 90 foxes}] wolves:[{Alexei 85 wolves} {Anastasia 78 wolves}]]
}
