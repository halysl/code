package main
// 输出：GOG
var a string

func main() {
   a = "G" // 这里的a是全局变量
   print(a)
   f1()
}

func f1() {
   a := "O"
   print(a)
   f2()
}

func f2() {
   print(a)
}