package neps_academy

import "fmt"

func Tomadas() {
	var t1, t2, t3, t4 int

	fmt.Scan(&t1)
	fmt.Scan(&t2)
	fmt.Scan(&t3)
	fmt.Scan(&t4)

	fmt.Println((t1 + t2 + t3 + t4) - 3)

}
