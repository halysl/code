# -*- coding: utf-8 -*-

import time

class Node:
    def __init__(self, elem):
        self.elem = elem
        self.pnext = None

    def __repr__(self):
        return str(self.elem)


class LCList:
    def __init__(self):
        self.rear = None

    def is_empty(self):
        """
        判断该链表是否为空
        :return: boolean
        """
        return self.rear == None

    def prepend(self, elem):  # 前端插入
        p = Node(elem)
        if self.rear is None:
            p.pnext = p  # 建立一个结点的环
            self.rear = p
        else:
            p.pnext = self.rear.pnext
            self.rear.pnext = p

    def append(self, elem):  # 尾端插入
        self.prepend(elem)
        self.rear = self.rear.pnext

    def pop_start(self):  # 前端弹出
        if self.rear is None:
            print("The list is None.")
            return
        p = self.rear.pnext
        if self.rear is p:  # 如果只有一个元素
            self.rear = None
        else:
            self.rear.pnext = p.pnext  # 令rear的指针等于第二个元素的地址
        return p.elem

    def printall(self):
        if self.is_empty():
            return
        p = self.rear.pnext
        print("Head", end=' ')
        while True:
            print("-->", p.elem, end=' ')
            if p is self.rear:
                break
            p = p.pnext
        print("--> None. Linked node finished")

def create_lclist(size):
    lclist = LCList()
    while size:
        lclist.prepend(size)
        size -= 1
    return lclist

def set_location(lclist, gap):
    tmp = lclist.rear
    a = tmp
    while gap:
        tmp = tmp.pnext
        gap -= 1
    b = tmp
    return a, b

def run(slow, fast, sp,fp):
    def print_now():
        print(f"现在的位置对应的数据是  slow:{slow.elem} fast:{fast.elem}")
    print_now()
    while True:
        time.sleep(0.5)
        tsp = sp
        tfp = fp
        if slow.elem == fast.elem:
            break
        while tsp:
            slow = slow.pnext
            tsp -= 1
        while tfp:
            fast = fast.pnext
            tfp -= 1
        print_now()

if __name__ == "__main__":
    # 环长16，初始位置差3，速度分别为1和5
    lclist = create_lclist(16)
    lclist.printall()
    slow, fast = set_location(lclist, gap=3)
    run(slow, fast, 1, 5)
