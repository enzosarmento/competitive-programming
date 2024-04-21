package neps_academy

import (
	"fmt"
	"sort"
)

func OrdenacaoTresNumeros() {
	var numbers []int

	var number int
	for i := 0; i < 3; i++ {
		fmt.Scan(&number)
		numbers = append(numbers, number)
	}

	sort.Ints(numbers)
	for _, v := range numbers {
		fmt.Println(v)
	}
}
