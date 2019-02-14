## js语法

### 字面量

- 数字：可以是整数或者是小数，或者是科学计数

```js
3.14
1001
123e5
```

- 字符串：可以使用单引号或双引号

```
"John Doe"
'John Doe'
```

- 表达式

```
5 + 6
5 * 6
```

- 数组

```js
[40, 100, 1, 5, 25, 10]
```

- 对象：类似于dict，但是key不需要引号

```js
{firstName:"John", 
lastName:"Doe", 
age:50, 
eyeColor:"blue"}
```

- 函数

```js
function myFunction(a, b) { 
    return a * b;
}
```

### 变量

JavaScript 使用关键字 var 来定义变量， 使用等号来为变量赋值。

```js
var x, length
x = 5
length = 6
```

### 操作符

<table>
<tr>
<th>类型</th>
<th>实例</th>
</tr>
<tr>
<td>赋值，算术和位运算符</td>
<td>=  +  -  *  /</td>
</tr>
<tr>
<td>条件，比较及逻辑运算符</td>
<td>	==  != <  > </td>
</tr>
</table>

```
x = 5
y = 6
z = (x + y) * 10
```

### 语句

以分号结尾的句子。

```
x = 5 + 6;
y = x * 10;
```

### 关键字

JavaScript 关键字用于标识要执行的操作。

和其他任何编程语言一样，JavaScript 保留了一些关键字为自己所用。

var 关键字告诉浏览器创建一个新的变量：

```
var x = 5 + 6;
var y = x * 10;
```

JavaScript 关键字必须以字母、下划线（_）或美元符（$）开始。

后续的字符可以是字母、数字、下划线或美元符（数字是不允许作为首字符出现的)。

### 保留字

有特定作用，不允许作为关键字。

```
abstract	else	instanceof	super
boolean	enum	int	switch
break	export	interface	synchronized
byte	extends	let	this
case	false	long	throw
catch	final	native	throws
char	finally	new	transient
class	float	null	true
const	for	package	try
continue	function	private	typeof
debugger	goto	protected	var
default	if	public	void
delete	implements	return	volatile
do	import	short	while
double	in	static	with
```

### 注释

JavaScript 不会执行注释。

单行注释以 // 开头。

```js
// 我不会执行
```

多行注释以 /* 开始，以 */ 结尾。

```js
/*
下面的这些代码会输出
一个标题和一个段落
并将代表主页的开始
*/
document.getElementById("myH1").innerHTML="欢迎来到我的主页";
document.getElementById("myP").innerHTML="这是我的第一个段落。";
```

行末使用注释

```js
var x=5;    // 声明 x 并把 5 赋值给它
var y=x+2;  // 声明 y 并把 x+2 赋值给它
```

### 大小写敏感

### 语句标识符

JavaScript 语句通常以一个 语句标识符 为开始，并执行该语句。

语句标识符是保留关键字不能作为变量名使用。



| 语句                               | 描述                                                         |
| ---------------------------------- | ------------------------------------------------------------ |
| break                              | 用于跳出循环。                                               |
| catch                              | 语句块，在 try 语句块执行出错时执行 catch 语句块。           |
| continue	跳过循环中的一个迭代。 |                                                              |
| do ... while                       | 执行一个语句块，在条件语句为 true 时继续执行该语句块。       |
| for                                | 在条件语句为 true 时，可以将代码块执行指定的次数。           |
| for ... in                         | 用于遍历数组或者对象的属性（对数组或者对象的属性进行循环操作）。 |
| function                           | 定义一个函数                                                 |
| if ... else                        | 用于基于不同的条件来执行不同的动作。                         |
| return                             | 退出函数                                                     |
| switch                             | 用于基于不同的条件来执行不同的动作。                         |
| throw                              | 抛出（生成）错误 。                                          |
| try                                | 实现错误处理，与 catch 一同使用。                            |
| var                                | 声明一个变量。                                               |
| while                              | 当条件语句为 true 时，执行语句块。                           |

### 空格
JavaScript 会忽略多余的空格。您可以向脚本添加空格，来提高其可读性。

```js
var person="Hege";
var person = "Hege";
```

### 对代码行进行折行

```js
document.write("你好 \
世界!");
# ERROR!
document.write \ 
("你好世界!");
```