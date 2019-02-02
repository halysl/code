# # -*- coding:utf-8 -*-
# import time, threading

# # 子线程将执行的函数
# def loop():
#     print('thread %s is running...'%threading.current_thread().name)
#     n = 0
#     while n < 5:
#         n += 1
#         print('thread %s >>> %s'%(threading.current_thread().name, n))
#         time.sleep(1)
#     print('thread %s ended.'%threading.current_thread().name)

# if __name__ == "__main__":
#     # 注意此处threading模块的current_threaad()方法永远返回当前线程的实例
#     # 在这里返回的是主线程的实例，名字为MainThread
#     print('threaad %s is running:...'%threading.current_thread().name)
#     # 创建一个Thread对象，执行函数loop，给子线程以名字，若没有名字，则默认为Thread-1
#     t = threading.Thread(target=loop, name='LoopThread')
#     t.start()
#     t.join()
#     # 当子线程执行完毕后，回到主线程
#     print('thread %s ended.'%threading.current_thread().name)


# -------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------

# # without lock
# import time, threading

# # 没有锁的时候，由于cpu内代码的执行不像高级语言那样“感觉是一个完整的操作”
# # 在最底层，加法和赋值操作是分开的，也就是balance = balance + n不是原子性的
# # 不加锁，多个线程之间会同时修改这个数据
# balance = 0

# def change_it(n):
#     global balance
#     balance = balance + n
#     balance = balance - n

# def run_thread(n):
#     for i in range(100000):
#         change_it(n)

# if __name__ == "__main__":
#     t1 = threading.Thread(target=run_thread, args=(5,))
#     t2 = threading.Thread(target=run_thread, args=(8,))
#     t1.start()
#     t2.start()
#     t1.join()
#     t2.join()
#     print('balance=',balance)

# -------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------

# with lock
import time, threading

# 声明一个锁对象，可以被线程所持有
balance = 0
lock = threading.Lock()

def change_it(n):
    global balance
    balance = balance + n
    balance = balance - n

def run_thread(n):
    for i in range(100000):
        # 当那个线程进行到这里，就获得锁，其他线程只有等待
        lock.acquire()
        # 这里的try---finally---更多的是保证资源的安全，在finally里把锁释放，不然会进入到死锁状态
        try:
            change_it(n)
        finally:
            lock.release()

if __name__ == "__main__":
    t1 = threading.Thread(target=run_thread, args=(5,))
    t2 = threading.Thread(target=run_thread, args=(8,))
    t1.start()
    t2.start()
    t1.join()
    t2.join()
    print('balance=',balance)