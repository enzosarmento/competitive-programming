package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	substituted, fixed := 0, 0

	for i := 0; i < n; i++ {
		var number int
		fmt.Scan(&number)
		if number < 50 {
			substituted++
		} else if number < 85 {
			fixed++
		}
	}

	fmt.Println(substituted, fixed)
}
