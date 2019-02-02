# -*- coding:utf-8 -*-
def log(func):
    def wrapper(*args,**kw):
        print('call %s():'%func.__name__)
        return func(*args,**kw)
    return wrapper

@log
def now():
    print('2018-04-26')

now()

def metric(fn):
    def wrapper(*args,**kw):
        print('%s executed in %s ms' % (fn.__name__, 10.24))
        return fn
    return wrapper


@metric
def fast(x, y):
    time.sleep(0.0012)
    return x + y;

@metric
def slow(x, y, z):
    time.sleep(0.1234)
    return x * y * z;

f = fast(11, 22)
s = slow(11, 22, 33)
if f != 33:
    print('测试失败!')
elif s != 7986:
    print('测试失败!')

