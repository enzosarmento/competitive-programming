package main

import "fmt"

func main() {
	var lengh, width, possibleLengh, possibleWidth int

	fmt.Scan(&lengh)
	fmt.Scan(&width)
	fmt.Scan(&possibleLengh)
	fmt.Scan(&possibleWidth)

	local := lengh * width
	possibleLocal := possibleLengh * possibleWidth

	if local >= possibleLocal {
		fmt.Println(local)
	} else {
		fmt.Println(possibleLocal)
	}

}
