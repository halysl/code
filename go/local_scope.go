package main
// 推测：输出GOG
var l = "G"

func localScope() {
   nl()
   ml()
   nl()
}

func nl() { print(l) }

func ml() {
   l := "O"
   print(l)
}