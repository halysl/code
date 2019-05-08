package main

import (
	"os"
	"fmt"
)

var (
	HOME = os.Getenv("HOME")
	USER = os.Getenv("USER")
	GOROOT = os.Getenv("GOROOT")
)

func showVarExample(){
	fmt.Println(HOME)
	fmt.Println(USER)
	fmt.Println(GOROOT)
}