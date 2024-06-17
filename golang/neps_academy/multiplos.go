package main

import "fmt"

func main() {
	var n, number int
	fmt.Scan(&n)

	var arr []int
	for i := 0; i < n; i++ {
		fmt.Scan(&number)
		arr = append(arr, number)
	}

	multipleTwo := 0
	multipleThree := 0
	multipleFour := 0

	for i := 0; i < len(arr); i++ {
		if arr[i]%2 == 0 {
			multipleTwo++
		}
		if arr[i]%3 == 0 {
			multipleThree++
		}
		if arr[i]%4 == 0 {
			multipleFour++
		}
	}

	fmt.Println(multipleTwo)
	fmt.Println(multipleThree)
	fmt.Println(multipleFour)
}
