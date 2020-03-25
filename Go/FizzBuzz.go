package main

import (
	"fmt"
	"strconv"
)

func main() {
	a := 3
	b := 5
	start := 1
	end := 100

	for i := start; i <= end; i++ {
		output := ""
		divisibility := false
		if i%a == 0 {
			output += "Fizz "
			divisibility = true
		}
		if i%b == 0 {
			output += "Buzz"
			divisibility = true
		}
		if !divisibility {
			output += strconv.Itoa(i)
		}
		fmt.Println(output)
	}

}
