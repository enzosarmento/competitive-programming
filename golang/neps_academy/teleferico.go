package main

import "fmt"

func main() {
	var c, a int
	fmt.Scan(&c)
	fmt.Scan(&a)

	ans := 0
	if c > a {
		ans++
	} else if c == a {
		ans += 2
	} else {
		for i := a; i > 0; i -= c - 1 {
			ans++
		}
	}

	fmt.Println(ans)
}
