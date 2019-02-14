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

双斜杠//

```
// 我不会执行
```

### 大小写敏感