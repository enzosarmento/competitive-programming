package neps_academy

import (
	"fmt"
)

func DoisVetoresParesImpares() {
	var pair []interface{}
	var odd []interface{}

	var number int
	for i := 0; i < 10; i++ {
		fmt.Scan(&number)
		if number%2 == 0 {
			pair = append(pair, number)
		} else {
			odd = append(odd, number)
		}
	}

	fmt.Println(pair...)
	fmt.Println(odd...)
}
