package main

import "fmt"

func locationMemory(){
	a := 1
	b := 2
	c := a
	fmt.Printf("a=%d\nb=%d\nc=%d\n&a=%x\n&b=%x\n&c=%x\n", a, b, c, &a, &b, &c)

	a = 3
	fmt.Printf("change the a value,now a=%d\t&a=%x\n", a, &a)
}
