package main

import "fmt"

func main(){
	a := int(1)
	fmt.Printf("int %d %p\n", a, &a)
	b := uint(2)
	fmt.Printf("unit %d %p\n", b, &b)
	c := int8(3)
	fmt.Printf("int8 %d %p\n", c, &c)
	d := int16(4)
	fmt.Printf("int16 %d %p\n", d, &d)
	e := int32(5)
	fmt.Printf("int32 %d %p\n", e, &e)
	f := int64(6)
	fmt.Printf("int64 %d %p\n", f, &f)
	
	a1 := 077
	a2 := 0xff
	fmt.Printf("%d %o %p\n", a1, a1, &a1)
	fmt.Printf("%d %x %p\n", a2, a2, &a2)
}
