# -*- coding: utf-8 -*-
import time
from functools import wraps
from contextlib import contextmanager

class Node(object):
    def __init__(self, data, next=None):
        """包含一个数据域，一个next域的节点，next是对下一个数据的引用
        """
        self.data = data
        self.next = next


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class DataTransformat:
    @staticmethod
    def list_2_link(arrary):
      # 倒插取头
        nex = None
        head = None
        for i in arrary[::-1]:
            head = ListNode(i)
            head.next = nex
            nex = head
        return head

    @staticmethod
    def link_2_list(link):
        arrary = []
        while link:
            arrary.append(link.val)
            link = link.next
        return arrary
    
    @staticmethod
    def find_node(head, value):
        tmp = head
        while tmp:
            if tmp.val == value:
                return tmp
            tmp = tmp.next
        return None


class SingleList(object):
    """以节点的方式实现链表，默认实现空列表
    """
    def __init__(self):
        self.head = None

    # 在开始处插入
    def add_node_first(self, data):
        self.head = Node(data, self.head)

    # 在末尾插入，若为空列表则直接插入，否则遍历到尾部
    def add_node_last(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
        else:
            probe = self.head
            while probe.next is not None:
                probe = probe.next
            probe.next = new_node

    # 任意位置添加节点，若 index 小于零，加在首部，若 index 大于链表长度，加在尾部
    def add_node_anywhere(self, index, data):
        if self.head is None or index <= 0:
            self.head = Node(data, self.head)
        else:
            probe = self.head
            while index >1 and probe.next is not None:
                probe = probe.next
                index -= 1
            probe.next = Node(data, probe.next)

    # 从首部删除节点
    def pop_node_first(self):
        if self.head is not None:
            removed_item = self.head.data
            self.head = self.head.next
            return removed_item
        else:
            return -1

    # 从尾部删除节点
    def pop_node_last(self):
        if self.head is None:
            return -1
        elif self.head.next is None:
            removed_item = self.head.data
            self.head = None
        else:
            probe = self.head
            while probe.next.next is not None:
                probe = probe.next
            removed_item = probe.next.data
            probe.next = None
        return removed_item

    # 任意位置删除节点，若 index 小于零，则删除首部节点，若 index 大于链表长度，则删除尾部节点
    def pop_node_anywhere(self, index):
        if index <= 0 or self.head.next is None:
            removed_item = self.head.data
            self.head = self.head.next
            return removed_item
        else:
            probe = self.head
            while index > 1 and probe.next.next is not None:
                probe = probe.next
                index -= 1
            removed_item = probe.next.data
            probe.next = probe.next.next
            return removed_item

    # 遍历输出
    def traverse(self):
        probe = self.head
        while probe is not None:
            print(probe.data)
            probe = probe.next

    # 根据数值查找链表有没有该数据
    def search(self, data):
        probe = self.head
        cnt = 0
        while probe is not None and data != probe.data:
            probe = probe.next
            cnt += 1
        if probe is not None:
            return "In", cnt
        else:
            return "Not in", -1

    # 根据索引位置替换数据
    def replace(self, index, new_data):
        probe = self.head
        while index > 0 and probe is not None:
            probe = probe.next
            index -= 1
        if probe is None:
            return -1
        else:
            probe.data = new_data
            return "Done"


@contextmanager
def exec_time():
    start = time.time()
    yield
    end = time.time()
    print(f"this code segment cost time: {end-start}ms")
