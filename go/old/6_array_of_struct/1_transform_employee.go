package main

import "fmt"

type employee struct {
	firstName string
	lastName  string
	age       int
	role      string
}

func TransformEmployeeData(array [][][]interface{}) []employee {
	result := []employee{}

	for _, a := range array {
		newEmployee := employee{firstName: a[0][1].(string), lastName: a[1][1].(string), age: a[2][1].(int), role: a[3][1].(string)}
		result = append(result, newEmployee)
	}

	return result
}

func main() {
	fmt.Println(TransformEmployeeData([][][]interface{}{
		{
			{"firstName", "Joe"}, {"lastName", "Blow"}, {"age", 42}, {"role", "clerk"},
		},
		{
			{"firstName", "Mary"}, {"lastName", "Jenkins"}, {"age", 36}, {"role", "manager"},
		},
	}))
	/*
		[
				{firstName: "Joe", lastName: "Blow", age: 42, role: "clerk"},
				{firstName: "Mary", lastName: "Jenkins", age: 36, role: "manager"}
		]
	*/
}
