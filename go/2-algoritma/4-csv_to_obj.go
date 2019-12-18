package main

import (
	"fmt"
	"strings"
)

func CsvToObject(keys, values string) map[string]string {
	splittedKeys := strings.Split(keys, ",")
	splittedValues := strings.Split(values, ",")

	result := map[string]string{}
	for i, key := range splittedKeys {
		result[key] = splittedValues[i]
	}
	return result
}

func main() {
	fmt.Println(CsvToObject("name,phoneNumber", "Dimitri,+666123654"))
	// { name: "Dimitri", phoneNumber: "+666123654" }
	fmt.Println(CsvToObject("firstName,lastName,nationality", "Sergei,Dragunov,Russia"))
	// { firstName: "Sergei", lastName: "Dragunov", nationality: "Russia" }
}
