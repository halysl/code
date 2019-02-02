# -*-coding:utf-8 -*-
import os
import redis
print("process (%s) start ......"%os.getpid())

pid = os.fork()

if pid ==0:
    print('child process (%s),ppid is %s'%(os.getpid(),os.getppid()))
else:
    print('i am present %s'%os.getpid())