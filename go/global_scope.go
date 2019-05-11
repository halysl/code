package main
// 输出：GOO
var a = "G"

func globalScope() {
   n()
   m()
   n()
}

func n() {
   print(a)
}

func m() {
   a = "O" // 重新赋值
   print(a)
}