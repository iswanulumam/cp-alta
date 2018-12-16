package main

import "fmt"

func solve(start int, end int, close int, members map[string]int) {
	for i := start; i <= end; i++ {
		if i%close == 0 {
			fmt.Printf("Tanggal %d: Tempat Fitnes Tutup\n", i)
		} else {
			var name []string
			for key := range members {
				if (i-start)%members[key] == 0 {
					name = append(name, key)
				}
			}
			fmt.Println("Tanggal", i, ":", name)
		}
	}
}

func main() {
	var members = map[string]int{}
	// members := make(map[string]int)
	// members := map[string]int{}

	members["Tono"] = 2
	members["Anton"] = 4
	members["Budi"] = 5
	solve(7, 31, 5, members)
}

/*
Tanggal 7: Tono, Anton, Budi
Tanggal 8:
Tanggal 9: Tono
Tanggal 10: Tempat Fitness Tutup
Tanggal 11: Tono, Anton
Tanggal 12: Budi
Tanggal 13: Tono
Tanggal 14:
Tanggal 15: Tempat Fitness Tutup
Tanggal 16:
Tanggal 17: Tono, Budi
Tanggal 18:
Tanggal 19: Tono, Anton
Tanggal 20: Tempat Fitness Tutup
Tanggal 21: Tono
Tanggal 22: Budi
Tanggal 23: Tono, Anton
Tanggal 24:
Tanggal 25: Tempat Fitness Tutup
Tanggal 26:
Tanggal 27: Tono, Anton, Budi
Tanggal 28:
Tanggal 29: Tono
Tanggal 30: Tempat Fitness Tutup
Tanggal 31: Tono, Anton
*/
