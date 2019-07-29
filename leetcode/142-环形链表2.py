# -*- coding: utf-8 -*-
import timeit
from utils import ListNode, DataTransformat, exec_time

class Solution:
    @classmethod
    def detectCycle1(self, head):
        if head is None or head.next is None:
            return "no cycle"
        node_li = []
        while head:
            if head in node_li:
                return "tail connects to node index {}".format(node_li.index(head))
            node_li.append(head)
            head = head.next
        return "no cycle"

    @classmethod
    def detectCycle2(self, head):
        start = fast = slow = head
        if head is None or head.next is None:
            return "no cycle"

        middle = None
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            if fast == slow:
                middle = fast
                break

        if middle is None:
            return "no cycle"
        
        index = 0
        while middle and middle.next:
            if start == middle:
                return "tail connects to node index {}".format(index)
            start = start.next
            middle = middle.next
            index += 1
            

def detectCycle():
    # test_list1 = [3, 2, 0, -4]
    # test_list2 = [1, 2]
    # test_list3 = [1]

    test_link1_1 = ListNode(3)
    test_link1_2 = ListNode(2)
    test_link1_3 = ListNode(0)
    test_link1_4 = ListNode(-4)
    test_link1_1.next = test_link1_2
    test_link1_2.next = test_link1_3
    test_link1_3.next = test_link1_4
    test_link1_4.next = test_link1_2

    test_link2_1 = ListNode(1)
    test_link2_2 = ListNode(2)
    test_link2_1.next = test_link2_2
    test_link2_2.next = test_link2_1

    test_link3_1 = ListNode(1)
    test_link3_1.next = None

    with exec_time():
        print(Solution.detectCycle1(test_link1_1))
        print(Solution.detectCycle1(test_link2_1))
        print(Solution.detectCycle1(test_link3_1))

    with exec_time():
        print(Solution.detectCycle2(test_link1_1))
        print(Solution.detectCycle2(test_link2_1))
        print(Solution.detectCycle2(test_link3_1))

detectCycle()
