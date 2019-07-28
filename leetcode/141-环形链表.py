# -*- coding: utf-8 -*-
from utils import ListNode, DataTransformat


class Solution(object):
    @staticmethod
    def hasCycle1(head):
        """
        :type head: ListNode
        :rtype: bool
        """
        id_list = []
        if head is None or head.next is None:
            return False
        while head:
            if id(head) in id_list:
                return True
            id_list.append(id(head))
            head = head.next
        return False

    @staticmethod
    def hasCycle2(head):
        fast=slow=head 
        while fast and fast.next:
            slow=slow.next
            fast=fast.next.next
            if fast == slow:
                return True
        return False


def checkHasCycle():
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

    print(Solution.hasCycle1(test_link1_1))
    print(Solution.hasCycle1(test_link2_1))
    print(Solution.hasCycle1(test_link3_1))

    print(Solution.hasCycle2(test_link1_1))
    print(Solution.hasCycle2(test_link2_1))
    print(Solution.hasCycle2(test_link3_1))
