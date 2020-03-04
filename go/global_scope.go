package main
// 输出：GOO
var g = "G"

func globalScope() {
   ng()
   mg()
   ng()
}

func ng() {
   print(g)
}

func mg() {
   g = "O" // 重新赋值
   print(g)
}