## XML vs JSON

JSON 和 XML 都在网络服务中被用来传输数据。

### JSON 有点像 XML

- JSON 和 XML 都有“可自述性”（人类易于读写）
- JSON 和 XML 都是分层次的
- JSON 和 XML 都可以被很多语言解析
- JSON 和 XML 都可以被 XMLHttpRequest 获取

### JSON 不像 XML

- JSON 不使用标签
- JSON 更简短
- JSON 可以被更快的读写
- JSON 可以使用数组

*最大的不同*：XML 可以被 XML 解析器解析；JSON 可以被标准 JavaScript 函数解析。

### 为什么 JSON 比 XML 更好

Using XML

- Fetch an XML document
- Use the XML DOM to loop through the document
- Extract values and store in variables

Using JSON

- Fetch a JSON string
- JSON.Parse the JSON string
