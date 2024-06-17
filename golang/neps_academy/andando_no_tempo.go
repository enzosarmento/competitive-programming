package main

import (
	"fmt"
	"sort"
)

func main() {
	var arr []int

	var number int
	for i := 0; i < 3; i++ {
		fmt.Scan(&number)
		arr = append(arr, number)
	}

	sort.Ints(arr)

	if arr[0]-arr[1] == 0 {
		fmt.Println("S")
	} else if arr[1]-arr[2] == 0 {
		fmt.Println("S")
	} else if (arr[0]+arr[1])-arr[2] == 0 {
		fmt.Println("S")
	} else {
		fmt.Println("N")
	}

}
