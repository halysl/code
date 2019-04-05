# redis 的命令和操作

## 登陆

`redis-cli -h host -p port -a password`

本地登陆类似于 `redis-cli -h 127.0.0.1 -p 6379`，不过可以直接 redis-cli 登陆。

## 关键概念：键（key）

`redis 127.0.0.1:6379> COMMAND KEY_NAME`

这里的命令针对键。

|序号|命令|描述|
|---|---|----|
|1  |DEL key|该命令用于在 key 存在时删除 key。|
|2	|DUMP key|序列化给定 key ，并返回被序列化的值。|
|3	|EXISTS key|检查给定 key 是否存在。|
|4	|EXPIRE key seconds|为给定 key 设置过期时间，以秒计。|
|5  |EXPIREAT key timestamp|EXPIREAT 的作用和 EXPIRE 类似，都用于为 key 设置过期时间。 不同在于 EXPIREAT 命令接受的时间参数是 UNIX 时间戳(unix timestamp)。|
|6	|PEXPIRE key milliseconds|设置 key 的过期时间以毫秒计。|
|7	|PEXPIREAT key milliseconds-timestamp|设置 key 过期时间的时间戳(unix timestamp) 以毫秒计|
|8	|KEYS pattern|查找所有符合给定模式( pattern)的 key 。|
|9	|MOVE key db|将当前数据库的 key 移动到给定的数据库 db 当中。|
|10	|PERSIST key|移除 key 的过期时间，key 将持久保持。|
|11	|PTTL key|以毫秒为单位返回 key 的剩余的过期时间。|
|12	|TTL key|以秒为单位，返回给定 key 的剩余生存时间(TTL, time to live)。|
|13	|RANDOMKEY|从当前数据库中随机返回一个 key 。|
|14	|RENAME key newkey|修改 key 的名称|
|15	|RENAMENX key newkey|仅当 newkey 不存在时，将 key 改名为 newkey 。|
|16	|TYPE key|返回 key 所储存的值的类型。|

## 字符串

|序号|命令|描述|
|---|---|----|
|1	|SET key value|设置指定 key 的值|
|2	|GET key|获取指定 key 的值。|
|3	|GETRANGE key start end|返回 key 中字符串值的子字符|
|4	|GETSET key value|将给定 key 的值设为 value ，并返回 key 的旧值(old value)。|
|5	|GETBIT key offset|对 key 所储存的字符串值，获取指定偏移量上的位(bit)。|
|6	|MGET key1 [key2..]|获取所有(一个或多个)给定 key 的值。|
|7	|SETBIT key offset value|对 key 所储存的字符串值，设置或清除指定偏移量上的位(bit)。|
|8	|SETEX key seconds value|将值 value 关联到 key ，并将 key 的过期时间设为 seconds (以秒为单位)。|
|9	|SETNX key value|只有在 key 不存在时设置 key 的值。|
|10	|SETRANGE key offset value|用 value 参数覆写给定 key 所储存的字符串值，从偏移量 offset 开始。|
|11	|STRLEN key|返回 key 所储存的字符串值的长度。|
|12	|MSET key value [key value ...]|同时设置一个或多个 key-value 对。|
|13	|MSETNX key value [key value ...]|同时设置一个或多个 key-value 对，当且仅当所有给定 key 都不存在。|
|14	|PSETEX key milliseconds value|这个命令和 SETEX 命令相似，但它以毫秒为单位设置 key 的生存时间，而不是像 SETEX 命令那样，以秒为单位。|
|15	|INCR key|将 key 中储存的数字值增一。|
|16	|INCRBY key increment|将 key 所储存的值加上给定的增量值（increment）。|
|17	|INCRBYFLOAT key increment|将 key 所储存的值加上给定的浮点增量值（increment） 。|
|18	|DECR key|将 key 中储存的数字值减一。|
|19	|DECRBY key decrement|key 所储存的值减去给定的减量值（decrement） 。|
|20	|APPEND key value|如果 key 已经存在并且是一个字符串， APPEND 命令将指定的 value 追加到该 key 原来值（value）的末尾。|

## 哈希（Hash）

Redis hash 是一个string类型的field和value的映射表，hash特别适合用于存储对象。

Redis 中每个 hash 可以存储 232 - 1 键值对（40多亿）。

|序号|命令|描述|
|---|----|----|
|1  |HDEL key field1 [field2]|删除一个或多个哈希表字段|
|2	|HEXISTS key field|查看哈希表 key 中，指定的字段是否存在。|
|3	|HGET key field| 获取存储在哈希表中指定字段的值。|
|4	|HGETALL key| 获取在哈希表中指定 key 的所有字段和值|
|5	|HINCRBY key field increment|为哈希表 key 中的指定字段的整数值加上增量 increment 。|
|6	|HINCRBYFLOAT key field increment|为哈希表 key 中的指定字段的浮点数值加上增量 increment 。|
|7	|HKEYS key|获取所有哈希表中的字段|
|8	|HLEN key|获取哈希表中字段的数量|
|9	|HMGET key field1 [field2] |获取所有给定字段的值|
|10	|HMSET key field1 value1 [field2 value2 ] |同时将多个 field-value (域-值)对设置到哈希表 key 中。|
|11	|HSET key field value |将哈希表 key 中的字段 field 的值设为 value 。|
|12	|HSETNX key field value |只有在字段 field 不存在时，设置哈希表字段的值。|
|13	|HVALS key |获取哈希表中所有值|
|14	|HSCAN key cursor [MATCH pattern] [COUNT count] |迭代哈希表中的键值对。|

