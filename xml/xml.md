# XML

XML 指可扩展标记语言（eXtensible Markup Language）。

XML 被设计用来传输和存储数据。

## XML 和 HTML 之间的差异

XML 不是 HTML 的替代。

XML 和 HTML 为不同的目的而设计：

- XML 被设计用来传输和存储数据，其焦点是数据的内容。
- HTML 被设计用来显示数据，其焦点是数据的外观。

HTML 旨在显示信息，而 XML 旨在传输信息。

## XML 不是对 HTML 的替代

XML 是对 HTML 的补充。

XML 不会替代 HTML，理解这一点很重要。在大多数 Web 应用程序中，XML 用于传输数据，而 HTML 用于格式化并显示数据。

对 XML 最好的描述是：

*XML* 是独立于软件和硬件的信息传输工具。

```xml
<!-- 简单的例子 -->
<bookstore>
    <book category="COOKING">
        <title lang="en">Everyday Italian</title>
        <author>Giada De Laurentiis</author>
        <year>2005</year>
        <price>30.00</price>
    </book>
    <book category="CHILDREN">
        <title lang="en">Harry Potter</title>
        <author>J K. Rowling</author>
        <year>2005</year>
        <price>29.99</price>
    </book>
        <book category="WEB">
        <title lang="en">Learning XML</title>
        <author>Erik T. Ray</author>
        <year>2003</year>
        <price>39.95</price>
    </book>
</bookstore>
```

## XML 语法

XML 的语法规则很简单，且很有逻辑。

### 必须有根元素

它是所有其他元素的父元素。

```xml
<?xml version="1.0" encoding="UTF-8"?>
<note>
  <to>Tove</to>
  <from>Jani</from>
  <heading>Reminder</heading>
  <body>Don't forget me this weekend!</body>
</note>
```

### XML 声明

XML 声明文件的可选部分，如果存在需要放在文档的第一行。

```xml
<?xml version="1.0" encoding="utf-8"?>
```

### XML 元素都必须有一个关闭标签

在 HTML 中，某些元素不必有一个关闭标签;

但是，在 XML 中，省略关闭标签是非法的。所有元素都必须有关闭标签。

### XML 标签对大小写敏感

XML 标签对大小写敏感。标签 <Letter> 与标签 <letter> 是不同的。

必须使用相同的大小写来编写打开标签和关闭标签。

### XML 标签必须正确嵌套

```xml
<!-- error -->
<b><i>This text is bold and italic</b></i>

<!-- right -->
<b><i>This text is bold and italic</i></b>
```

### XML 属性值必须加引号

与 HTML 类似，XML 元素也可拥有属性（名称/值的对）。

在 XML 中，XML 的属性值必须加引号。

请研究下面的两个 XML 文档。 第一个是错误的，第二个是正确的：

```xml
<note date=12/11/2007>
<to>Tove</to>
<from>Jani</from>
</note>
```

```xml
<note date="12/11/2007">
<to>Tove</to>
<from>Jani</from>
</note>
```

### 实体引用

如果您把字符 "<" 放在 XML 元素中，会发生错误，这是因为解析器会把它当作新元素的开始。

这样会产生 XML 错误：

```xml
<message>if salary < 1000 then</message>
```

为了避免这个错误，请用实体引用来代替 "<" 字符：

```xml
<message>if salary &lt; 1000 then</message>
```

&lt;<br>	<<br>	less than
&gt;<br>	><br>	greater than
&amp;<br>	&<br>	ampersand
&apos;<br>	'<br>	apostrophe
&quot;<br>	"<br>	quotation mark

## XML 元素
### 注

XML 现在的很多使用场景已经被 JSON 替代，但在一些特殊领域，XML 的设计思想很适合存储特定数据，例如 XPATH 在爬虫的应用。