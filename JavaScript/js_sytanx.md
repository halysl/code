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

JavaScript 变量名必须以字母、下划线（_）或美元符（$）开始。

后续的字符可以是字母、数字、下划线或美元符（数字是不允许作为首字符出现的)。

您可以在一条语句中声明很多变量。该语句以 var 开头，并使用逗号分隔变量即可：

```js
var lastname="Doe", age=30, job="carpenter";

var lastname="Doe",
age=30,
job="carpenter";

var x,y,z=1;
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

### 函数

函数是由事件驱动的或者当它被调用时执行的可重复使用的代码块。

```
<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>测试实例</title>
<script>
function myFunction()
{
    alert("Hello World!");
}
</script>
</head>
 
<body>
<button onclick="myFunction()">点我</button>
</body>
</html>
```

js 函数声明

```js
function functionname()
{
    // 执行代码
}
```

可以在某事件发生时直接调用函数（比如当用户点击按钮时），并且可由 JavaScript 在任何位置进行调用。

#### 调用带参数的函数

```js
function myFunction(var1,var2)
{
代码
}
```

#### 带有返回值的函数

```js
function myFunction()
{
    var x=5;
    return x;
}
```

### 作用域

#### 局部作用域

```js
// 此处不能调用 carName 变量
function myFunction() {
    var carName = "Volvo";
    // 函数内可调用 carName 变量
}
```

#### 全局变量
变量在函数外定义，即为全局变量。

全局变量有 全局作用域: 网页中所有脚本和函数均可使用。 

```js
var carName = " Volvo";
 
// 此处可调用 carName 变量
function myFunction() {
    // 函数内可调用 carName 变量
}
```

如果变量在函数内没有声明（没有使用 var 关键字），该变量为全局变量。

```
// 此处可调用 carName 变量
 
function myFunction() {
    carName = "Volvo";
    // 此处可调用 carName 变量
}
```

#### HTML 中的全局变量

在 HTML 中, 全局变量是 window 对象: 所有数据变量都属于 window 对象。

```
//此处可使用 window.carName
 
function myFunction() {
    carName = "Volvo";
}
```

### JavaScript 事件

HTML 事件是发生在 HTML 元素上的事情。

当在 HTML 页面中使用 JavaScript 时， JavaScript 可以触发这些事件。

HTML 事件可以是浏览器行为，也可以是用户行为。

以下是 HTML 事件的实例：

- HTML 页面完成加载
- HTML input 字段改变时
- HTML 按钮被点击

通常，当事件发生时，你可以做些事情。

在事件触发时 JavaScript 可以执行一些代码。

HTML 元素中可以添加事件属性，使用 JavaScript 代码来添加 HTML 元素。



#### 常见的HTML事件

| 事件        | 描述                         |
| ----------- | ---------------------------- |
| onchange    | HTML 元素改变                |
| onclick     | 用户点击 HTML 元素           |
| onmouseover | 用户在一个HTML元素上移动鼠标 |
| onmouseout  | 用户从一个HTML元素上移开鼠标 |
| onkeydown   | 用户按下键盘按键             |
| onload      | 浏览器已完成页面的加载       |



#### 特殊字符

可以使用反斜杠 (\) 来转义。



| 代码 | 输出      |
| ---- | --------- |
| \\'  | 单引号    |
| \\"  | 双引号    |
| \\\  | 反斜杠    |
| \\n  | 换行      |
| \\r  | 回车      |
| \\t  | tab制表符 |
| \\b  | 退格符    |
| \\f  | 换页符    |



#### 字符串方法



| 方法                | 描述                                                         |
| ------------------- | ------------------------------------------------------------ |
| charAt()            | 返回指定索引位置的字符                                       |
| charCodeAt()        | 返回指定索引位置字符的 Unicode 值                            |
| concat()            | 连接两个或多个字符串，返回连接后的字符串                     |
| fromCharCode()      | 将 Unicode 转换为字符串                                      |
| indexOf()           | 返回字符串中检索指定字符第一次出现的位置                     |
| lastIndexOf()       | 返回字符串中检索指定字符最后一次出现的位置                   |
| localeCompare()     | 用本地特定的顺序来比较两个字符串                             |
| match()             | 找到一个或多个正则表达式的匹配                               |
| replace()           | 替换与正则表达式匹配的子串                                   |
| search()            | 检索与正则表达式相匹配的值                                   |
| slice()             | 提取字符串的片断，并在新的字符串中返回被提取的部分           |
| split()             | 把字符串分割为子字符串数组                                   |
| substr()            | 从起始索引号提取字符串中指定数目的字符                       |
| substring()         | 提取字符串中两个指定的索引号之间的字符                       |
| toLocaleLowerCase() | 根据主机的语言环境把字符串转换为小写，只有几种语言（如土耳其语）具有地方特有的大小写映射 |
| toLocaleUpperCase() | 根据主机的语言环境把字符串转换为大写，只有几种语言（如土耳其语）具有地方特有的大小写映射 |
| toLowerCase()       | 把字符串转换为小写                                           |
| toString()          | 返回字符串对象值                                             |
| toUpperCase()       | 把字符串转换为大写                                           |
| trim()              | 移除字符串首尾空白                                           |
| valueOf()           | 返回某个字符串对象的原始值                                   |

### 条件语句

通常在写代码时，您总是需要为不同的决定来执行不同的动作。您可以在代码中使用条件语句来完成该任务。

在 JavaScript 中，我们可使用以下条件语句：

- if 语句 - 只有当指定条件为 true 时，使用该语句来执行代码

```
if (condition)
{
    当条件为 true 时执行的代码
}
```

- if...else 语句 - 当条件为 true 时执行代码，当条件为 false 时执行其他代码

```
if (condition)
{
    当条件为 true 时执行的代码
}
else
{
    当条件不为 true 时执行的代码
}
```

- if...else if....else 语句- 使用该语句来选择多个代码块之一来执行

```
if (condition1)
{
    当条件 1 为 true 时执行的代码
}
else if (condition2)
{
    当条件 2 为 true 时执行的代码
}
else
{
  当条件 1 和 条件 2 都不为 true 时执行的代码
}
```

- switch 语句 - 使用该语句来选择多个代码块之一来执行

```
switch(n)
{
    case 1:
        执行代码块 1
        break;
    case 2:
        执行代码块 2
        break;
    default:
        与 case 1 和 case 2 不同时执行的代码
}
```

首先设置表达式 n（通常是一个变量）。随后表达式的值会与结构中的每个 case 的值做比较。如果存在匹配，则与该 case 关联的代码块会被执行。请使用 break 来阻止代码自动地向下一个 case 运行。

使用 default 关键词来规定匹配不存在时做的事情

```
var d=new Date().getDay(); 
switch (d) 
{ 
  case 0:x="今天是星期日"; 
  break; 
  case 1:x="今天是星期一"; 
  break; 
  case 2:x="今天是星期二"; 
  break; 
  case 3:x="今天是星期三"; 
  break; 
  case 4:x="今天是星期四"; 
  break; 
  case 5:x="今天是星期五"; 
  break; 
  case 6:x="今天是星期六"; 
  break; 
}
```