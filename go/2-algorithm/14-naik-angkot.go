package main

import (
	"fmt"
	"math"
)

type detilPenumpang struct {
	penumpang string
	naikDari  string
	tujuan    string
	bayar     int
}

func naikAngkot(penumpang [][]string) []detilPenumpang {
	// rute := []rune{'A', 'B', 'C', 'D', 'E', 'F'}
	result := []detilPenumpang{}

	for _, value := range penumpang {
		a := []rune(value[1])
		b := []rune(value[2])
		var bayar int = int(math.Abs(float64(int(a[0]-b[0])))) * 2000

		newPenumpang := detilPenumpang{
			penumpang: value[0],
			naikDari:  value[1],
			tujuan:    value[2],
			bayar:     bayar,
		}
		result = append(result, newPenumpang)
	}

	return result
}

func main() {
	data := [][]string{
		{"Dimitri", "B", "F"},
		{"Icha", "A", "B"},
	}
	fmt.Println(naikAngkot(data))
	/*
		[
		 { penumpang: 'Dimitri', naikDari: 'B', tujuan: 'F', bayar: 8000 },
		 { penumpang: 'Icha', naikDari: 'A', tujuan: 'B', bayar: 2000 }
		]
	*/
}
