package main

import "fmt"

func main() {
	var m [3][3]int

	var number int
	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			fmt.Scan(&number)
			m[i][j] = number
		}
	}

	lineOne := 0
	lineTwo := 0
	lineThree := 0
	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			lineOne += m[i][0]
			lineTwo += m[i][1]
			lineThree += m[i][2]
		}
	}

	fmt.Println("Coluna 0:", lineOne/3)
	fmt.Println("Coluna 1:", lineTwo/3)
	fmt.Println("Coluna 2:", lineThree/3)

}
