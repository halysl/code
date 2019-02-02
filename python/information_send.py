# -*- coding:utf-8 -*-
# import os

# print('Process (%s) start...'%os.getpid())
# # fork()函数返回两次，操作系统将当前进程复制一份给子进程
# # 父进程调用该函数返回子进程的pid，而子进程返回0
# # 同时，子进程通过getppid()函数获得父进程进程号
# pid = os.fork()

# if pid == 0:
#     print('i am child process and pid==(%s), my parent pid==(%s)'%(os.getpid(), os.getppid()))
# else:
#     print('i am parent process and pid==(%s), i create a process and its pid==(%s)'%(os.getpid(), pid))



# from multiprocessing import Process
# import os
# # 子程序要跑的函数
# def run_proc(name):
#     print('Run child process %s (%s)'%(name, os.getpid()))

# if __name__ == "__main__":
#     print('Parent process %s.'%os.getpid())
#     # 创建一个process对象，传入执行函数和参数
#     p = Process(target=run_proc,args=('test',))
#     print('Child process will start.')
#     # 子进程开始执行
#     p.start()
#     p.join()
#     # 如果子进程进入死循环，这里就执行不了了
#     print('Child process Done.')


# from multiprocessing import Pool
# import os, time, random
# # 子程序将要跑的函数，主要输出子程序在哪个进程运行，运行了多久
# def long_time_task(name):
#     print('Run task %s (%s)'%(name, os.getpid()))
#     start = time.time()
#     time.sleep(random.random() * 3)
#     end = time.time()
#     print("Task %s runs %0.2f second."%(name, end - start))

# if __name__ == "__main__":
#     print('Parents process %s'%os.getpid())
#     # 创建一个进程池对象，这个对象的参数决定了之后的多进程执行“最多可以同时运行的个数”
#     p = Pool(4)
#     # 创建了五个进程，使用apply_async()函数执行子进程
#     for i in range(5):
#         p.apply_async(long_time_task, args=(i,))
#     print('Waiting for all subprocess done...')
#     # close()要在join()之前调用，代表着“不再增加子进程”
#     p.close()
#     # join()代表等待所以子进程完毕
#     p.join()
#     print("All subprocess done")


# import subprocess
# # 调用外部进程，作为当前进程的子进程
# # 在这里等于在命令行输入了 nslookup www.python.org
# # subprocess.call()返回程序退出码
# print('$ nslookup www.python.org')
# r = subprocess.call(['nslookup','www.python.org'])
# print('Exit code:',r)
# # 在这里，等于在命令行用python执行一个py文件作为子进程
# print('$ python test.py')
# r = subprocess.call(['python','test.py'])
# print('Exit code:',r)

# 进程间通信可以使用Queue的方式进行传递
from multiprocessing import Process,Queue
import os, time, random

# 写函数
def write(q):
    print('Process to write (%s)'%os.getpid())
    for value in ['A','B','C']:
        print('Put %s to queue...'%value)
        q.put(value)
        time.sleep(random.random())
# 读函数，死循环
def read(q):
    print('Process to read (%s)'%os.getpid())
    while  True:
        value = q.get(True)
        print('Get %s from queue...'%value)

if __name__ == "__main__":
    # 创建一个Queue对象
    q = Queue()
    # 创建两个子进程，一个负责写、一个负责读
    pw = Process(target=write, args=(q,))
    pr = Process(target=read, args=(q,))
    # 同时开始
    pw.start()
    pr.start()
    # 先等待pw完成任务，再强制停止pr进程
    pw.join()
    pr.terminate()