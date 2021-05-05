package main

import (
	"fmt"
)

type spell struct {
	q         int
	w         int
	e         int
	spellName string
}

func invokeSpell(input string) string {
	spells := []spell{
		spell{q: 3, w: 0, e: 0, spellName: "Cold Snap"},
		spell{q: 0, w: 2, e: 1, spellName: "Alacrity"},
		spell{q: 1, w: 0, e: 2, spellName: "Forge Spirit"},
		spell{q: 0, w: 0, e: 3, spellName: "Sunstrike"},
		spell{q: 1, w: 2, e: 0, spellName: "Tornado"},
		spell{q: 0, w: 3, e: 0, spellName: "EMP"},
		spell{q: 0, w: 1, e: 2, spellName: "Chaos Meteor"},
		spell{q: 1, w: 1, e: 1, spellName: "Deafening Blast"},
		spell{q: 2, w: 0, e: 1, spellName: "Ice Wall"},
		spell{q: 2, w: 1, e: 0, spellName: "Ghost Walk"},
	}

	spellmapper := map[string]int{}
	spellmapper["q"] = 0
	spellmapper["w"] = 0
	spellmapper["e"] = 0

	for i := 0; i < len(input); i++ {
		key := string(input[i])
		spellmapper[key] += 1
	}

	for _, spell := range spells {
		if (spellmapper["q"] == spell.q) && (spellmapper["w"] == spell.w) && (spellmapper["e"] == spell.e) {
			return spell.spellName
		}
	}

	return "Combination does not exist"
}

func main() {
	fmt.Println(invokeSpell("qwe")) // Deafening Blast
	fmt.Println(invokeSpell("ewq")) // Deafening Blast
	fmt.Println(invokeSpell("qqq")) // Cold Snap
	fmt.Println(invokeSpell("wwq")) // Tornado
	fmt.Println(invokeSpell("wwe")) // Alacrity
	fmt.Println(invokeSpell("wew")) // Alacrity
	fmt.Println(invokeSpell("wqa")) // Combination does not exist
}
