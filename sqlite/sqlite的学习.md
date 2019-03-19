# SQLITE 的学习

sqlite 是一个非常轻量化的数据库，用于存储个人少量的数据，简单够用。同时它对 python 的支持相当好。

## 点命令

第一次使用 sqlite 的时候连退出都不会，想起了被 vi 支配的恐惧，后来才知道 sqlite 有一系列点命令，通过这些命令可以简化一些 SQL 语句。这些命令不属于 SQL 的定义，仅仅为了更好用。

```shell
$ sqlite3
SQLite version 3.3.6
Enter ".help" for instructions
sqlite>
```



常用点命令：

| 命令               | 描述                                                         |
| ------------------ | ------------------------------------------------------------ |
| .backup ?DB? FILE  | 备份 DB 数据库（默认是 "main"）到 FILE 文件。                |
| .bail ON\|OFF      | 发生错误后停止。默认为 OFF。                                 |
| .databases         | 列出数据库的名称及其所依附的文件。                           |
| .dump ?TABLE?      | 以 SQL 文本格式转储数据库。如果指定了 TABLE 表，则只转储匹配 LIKE 模式的 TABLE 表。 |
| .echo ON\|OFF      | 开启或关闭 echo 命令。                                       |
| .exit              | 退出 SQLite 提示符。                                         |
| .explain ON\|OFF   | 开启或关闭适合于 EXPLAIN 的输出模式。如果没有带参数，则为 EXPLAIN on，及开启 EXPLAIN。 |
| .header(s) ON\|OFF | 开启或关闭头部显示。                                         |
| .help              | 显示消息。                                                   |
| .import FILE TABLE | 导入来自 FILE 文件的数据到 TABLE 表中。                      |
| .indices ?TABLE?   | 显示所有索引的名称。如果指定了 TABLE 表，则只显示匹配 LIKE 模式的 TABLE 表的索引。 |
| .load FILE ?ENTRY? | 加载一个扩展库。                                             |
| .log FILE\|off     | 开启或关闭日志。FILE 文件可以是 stderr（标准错误）/stdout（标准输出）。 |
| .mode MODE         | 设置输出模式，MODE 可以是下列之一：<br>-**csv** 逗号分隔的值 <br>-**column** 左对齐的列 <br>-**html** HTML 的代码 <br>-**insert** TABLE 表的 SQL 插入（insert）语句<br>-**line** 每行一个值 <br>-**list** 由 .separator 字符串分隔的值 <br>-**tabs** 由 Tab 分隔的值 <br>-**tcl** TCL 列表元素 |
| .nullvalue STRING | 在 NULL 值的地方输出 STRING 字符串。 |
| .output FILENAME | 发送输出到 FILENAME 文件。 |
| .output stdout | 发送输出到屏幕。 |
| .print STRING... | 逐字地输出 STRING 字符串。 |
| .prompt MAIN CONTINUE | 替换标准提示符。 |
| .quit | 退出 SQLite 提示符。 |
| .read FILENAME | 执行 FILENAME 文件中的 SQL。 |
| .schema ?TABLE? | 显示 CREATE 语句。如果指定了 TABLE 表，则只显示匹配 LIKE 模式的 TABLE 表。 |
| .separator STRING | 改变输出模式和 .import 所使用的分隔符。 |
| .show | 显示各种设置的当前值。 |
| .stats ON\|OFF | 开启或关闭统计。 |
| .tables ?PATTERN? | 列出匹配 LIKE 模式的表的名称。 |
| .timeout MS | 尝试打开锁定的表 MS 毫秒。 |
| .width NUM NUM | 为 "column" 模式设置列宽度。 |
| .timer ON\|OFF | 开启或关闭 CPU 定时器。 |

有了上面这张表，就可以用 .exit 或者 .quit 退出 SQLite Shell 了。

### 格式化输出

```shell
sqlite>.header on
sqlite>.mode column
sqlite>.timer on
sqlite>
```

```shell
ID          NAME        AGE         ADDRESS     SALARY
----------  ----------  ----------  ----------  ----------
1           Paul        32          California  20000.0
2           Allen       25          Texas       15000.0
3           Teddy       23          Norway      20000.0
4           Mark        25          Rich-Mond   65000.0
5           David       27          Texas       85000.0
6           Kim         22          South-Hall  45000.0
7           James       24          Houston     10000.0
CPU Time: user 0.000000 sys 0.000000
```

### sqlite_master 表格

主表中保存数据库表的关键信息，并把它命名为 sqlite_master。

```shell
sqlite>.schema sqlite_master
CREATE TABLE sqlite_master (
  type text,
  name text,
  tbl_name text,
  rootpage integer,
  sql text
);
```

## 语法

### 注释

SQLite 注释是附加的注释，可以在 SQLite 代码中添加注释以增加其可读性，他们可以出现在任何空白处，包括在表达式内和其他 SQL 语句的中间，但它们不能嵌套。

SQL 注释以两个连续的 "-" 字符（ASCII 0x2d）开始，并扩展至下一个换行符（ASCII 0x0a）或直到输入结束，以先到者为准。

您也可以使用 C 风格的注释，以 "/\*" 开始，并扩展至下一个 "*/" 字符对或直到输入结束，以先到者为准。SQLite的注释可以跨越多行。

```shell
sqlite>.help -- 这是一个简单的注释
```

### 语句

所有的 SQLite 语句可以以任何关键字开始，如 SELECT、INSERT、UPDATE、DELETE、ALTER、DROP 等，所有的语句以分号（;）结束。其使用方法类似标准 SQL 语法。

## 数据类型

SQLite 数据类型是一个用来指定任何对象的数据类型的属性。SQLite 中的每一列，每个变量和表达式都有相关的数据类型。

您可以在创建表的同时使用这些数据类型。SQLite 使用一个更普遍的动态类型系统。在 SQLite 中，值的数据类型与值本身是相关的，而不是与它的容器相关。

### SQLite 存储类

| 存储类   | 描述                                                         |
| ------- | ----------------------------------------------------------- |
| NULL    | 值是一个 NULL 值。                                            |
| INTEGER	| 值是一个带符号的整数，根据值的大小存储在 1、2、3、4、6 或 8 字节中。  |
| REAL	  | 值是一个浮点值，存储为 8 字节的 IEEE 浮点数字。                   |
| TEXT	  | 值是一个文本字符串，使用数据库编码（UTF-8、UTF-16BE 或 UTF-16LE）存储。|
| BLOB	  | 值是一个 blob 数据，完全根据它的输入存储。|

## 数据库相关操作

### 创建数据库
```shell
$sqlite3 DatabaseName.db
```

如果创建成功，会直接进入 sqlite shell，同时也可以查询 `.databases`来检查它是否在数据库列表中。

### 导出数据库

```shell
sqlite3 testDB.db .dump > testDB.sql
```

### 附加数据库 