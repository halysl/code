## 发布订阅

Redis 发布订阅(pub/sub)是一种消息通信模式：发送者(pub)发送消息，订阅者(sub)接收消息。

Redis 客户端可以订阅任意数量的频道。

当有新消息通过 PUBLISH 命令发送给频道 channel1 时， 这个消息就会被发送给订阅它的三个客户端。

|序号|命令|描述|
|1	|PSUBSCRIBE pattern [pattern ...]|订阅一个或多个符合给定模式的频道。|
|2	|PUBSUB subcommand [argument [argument ...]] |查看订阅与发布系统状态。|
|3	|PUBLISH channel message |将信息发送到指定的频道。|
|4	|PUNSUBSCRIBE [pattern [pattern ...]] |退订所有给定模式的频道。|
|5	|SUBSCRIBE channel [channel ...] |订阅给定的一个或多个频道的信息。|
|6	|UNSUBSCRIBE [channel [channel ...]] |指退订给定的频道。|

## 事务

Redis 事务可以一次执行多个命令， 并且带有以下两个重要的保证：

批量操作在发送 EXEC 命令前被放入队列缓存。
收到 EXEC 命令后进入事务执行，事务中任意命令执行失败，其余的命令依然被执行。
在事务执行过程，其他客户端提交的命令请求不会插入到事务执行命令序列中。
一个事务从开始到执行会经历以下三个阶段：

- 开始事务。
- 命令入队。
- 执行事务。

以下是一个事务的例子， 它先以 MULTI 开始一个事务， 然后将多个命令入队到事务中， 最后由 EXEC 命令触发事务， 一并执行事务中的所有命令：

```shell
redis 127.0.0.1:6379> MULTI
OK

redis 127.0.0.1:6379> SET book-name "Mastering C++ in 21 days"
QUEUED

redis 127.0.0.1:6379> GET book-name
QUEUED

redis 127.0.0.1:6379> SADD tag "C++" "Programming" "Mastering Series"
QUEUED

redis 127.0.0.1:6379> SMEMBERS tag
QUEUED

redis 127.0.0.1:6379> EXEC
1) OK
2) "Mastering C++ in 21 days"
3) (integer) 3
4) 1) "Mastering Series"
   2) "C++"
   3) "Programming"
```

单个 Redis 命令的执行是原子性的，但 Redis 没有在事务上增加任何维持原子性的机制，所以 Redis 事务的执行并不是原子性的。

事务可以理解为一个打包的批量执行脚本，但批量指令并非原子化的操作，中间某条指令的失败不会导致前面已做指令的回滚，也不会造成后续的指令不做。


|序号|命令|描述|
|-|----|---|
|1|DISCARD|取消事务，放弃执行事务块内的所有命令。|
|2|EXEC|执行所有事务块内的命令。|
|3|MULTI|标记一个事务块的开始。|
|4|UNWATCH|取消 WATCH 命令对所有 key 的监视。|
|5|WATCH key [key ...]|监视一个(或多个) key ，如果在事务执行之前这个(或这些) key 被其他命令所改动，那么事务将被打断。|

## 脚本

Redis 脚本使用 Lua 解释器来执行脚本。 Redis 2.6 版本通过内嵌支持 Lua 环境。执行脚本的常用命令为 EVAL。

```shell
redis 127.0.0.1:6379> EVAL script numkeys key [key ...] arg [arg ...]
```

```shell
redis 127.0.0.1:6379> EVAL "return {KEYS[1],KEYS[2],ARGV[1],ARGV[2]}" 2 key1 key2 first second

1) "key1"
2) "key2"
3) "first"
4) "second"
```

|序号|命令|描述|
|1|EVAL script numkeys key [key ...] arg [arg ...] |执行 Lua 脚本。|
|2|EVALSHA sha1 numkeys key [key ...] arg [arg ...] |执行 Lua 脚本。|
|3|SCRIPT EXISTS script [script ...] |查看指定的脚本是否已经被保存在缓存当中。|
|4|SCRIPT FLUSH |从脚本缓存中移除所有脚本。|
|5|SCRIPT KILL |杀死当前正在运行的 Lua 脚本。|
|6|SCRIPT LOAD script |将脚本 script 添加到脚本缓存中，但并不立即执行这个脚本。|

## 连接

```shell
redis 127.0.0.1:6379> AUTH "password"
OK
redis 127.0.0.1:6379> PING
PONG
```

|序号|命令|描述|
|---|---|----|
|1|AUTH password |验证密码是否正确|
|2|	ECHO message |打印字符串|
|3|	PING |查看服务是否运行|
|4|	QUIT |关闭当前连接|
|5|	SELECT index |切换到指定的数据库|

