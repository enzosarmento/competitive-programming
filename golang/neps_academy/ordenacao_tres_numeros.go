package main

import (
	"fmt"
	"sort"
)

func main() {
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
