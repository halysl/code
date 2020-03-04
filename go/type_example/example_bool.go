package main

import "fmt"

func main() {
	a := 1
	res := a == 1
	fmt.Printf("a==1 --> %t\n", a == 1)
	fmt.Printf("a!=1 --> %t\n", a != 1)
	fmt.Printf("a==1.0 --> %t\n", a == 1.0)
	fmt.Println(res)
}
