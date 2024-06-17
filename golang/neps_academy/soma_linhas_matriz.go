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
			lineOne += m[0][j]
			lineTwo += m[1][j]
			lineThree += m[2][j]
		}
	}

	fmt.Println("Linha 0:", lineOne/3)
	fmt.Println("Linha 1:", lineTwo/3)
	fmt.Println("Linha 2:", lineThree/3)

}
