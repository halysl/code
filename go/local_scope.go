package main
// 推测：输出GOG
var a = "G"

func localScope() {
   n()
   m()
   n()
}

func n() { print(a) }

func m() {
   a := "O"
   print(a)
}