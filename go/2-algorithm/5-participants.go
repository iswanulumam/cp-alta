package main

import (
	"fmt"
)

type countrie struct {
	total int
	names []string
}

func participantsSummary(participant [][]string) map[string]countrie {
	result := map[string]countrie{}

	for _, participantValue := range participant {
		var (
			name  string = participantValue[0]
			state string = participantValue[1]
		)

		_, exist := result[state]
		if !exist {
			newCountrie := countrie{total: 1, names: []string{name}}
			result[state] = newCountrie
		} else {
			var newState = result[state]
			newState.total++
			newState.names = append(newState.names, name)
			result[state] = newState
		}
	}

	return result
}

func main() {
	participant1 := [][]string{
		{"Dimitri", "Russia"},
		{"Heihachi", "Japan"},
		{"Sergei", "Russia"},
		{"Kazuya", "Japan"},
		{"Hwoarang", "South Korea"},
		{"Jin", "Japan"},
	}
	fmt.Println(participantsSummary(participant1))
	/*
		{
			Russia: {
				total: 2,
				names: [ 'Dimitri', 'Sergei' ]
			},
			Japan: {
				total: 3,
				names: [ 'Heihachi', 'Kazuya', 'Jin' ]
			},
			'South Korea': {
				total: 1,
				names: [ 'Hwoarang' ]
			}
		}
	*/
	fmt.Println("--")
	participant2 := [][]string{
		{"Suzuka", "Japan"},
		{"Steve", "United Kingdom"},
		{"Paul", "USA"},
	}
	fmt.Println(participantsSummary(participant2))
	/*
		{
			Japan: {
				total: 1,
				names: [ 'Suzuka' ]
			},
			'United Kingdom': {
				total: 1,
				names: [ 'Steve' ]
			},
			USA: {
				total: 1,
				names: [ 'Paul' ]
			}
		}
	*/
}
