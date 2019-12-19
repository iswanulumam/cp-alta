package main

import (
	"fmt"
)

type countrie struct {
	total int
	names []string
}

func participantsSummary(participant [][]string) string /*map[string]countrie*/ {
	fmt.Println(participant)
	return ""
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
