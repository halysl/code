package main

import "fmt"

func main(){
	var c1 complex64 = 5 + 10i
	c2 := complex(1.5, 2)
	
	fmt.Printf("复数c1是%v，它的实部是%f，虚部是%f\n", c1, real(c1), imag(c1))
	fmt.Printf("复数c2是%v，它的实部是%f，虚部是%f\n", c2, real(c2), imag(c2))
}