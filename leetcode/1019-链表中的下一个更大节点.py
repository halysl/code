# -*- coding: utf-8 -*-
from utils import DataTransformat


class Solution(object):
    @staticmethod
    def nextLargerNodes(head):
        """
        :type head: ListNode
        :rtype: List[int]
        """
        if not head:
            return []
        def reverse(head):
            pre = None
            cur = head
            while cur:
                tmp = cur.next
                cur.next = pre
                pre = cur
                cur = tmp
            return pre
        stack = []
        result = []
        head = reverse(head)
        cur = head
        while cur:
            if not stack:
                stack.append(cur.val)
            while True:
                if cur.val < stack[-1]:
                    result.append(stack[-1])
                    stack.append(cur.val)
                    break
                else:
                    stack.pop()
                    if not stack:
                        result.append(0)
                        stack.append(cur.val)
                        break
            cur = cur.next
        return result[::-1]

def get_next_larger_nodes():
    origin_list1 = [2, 1, 5]
    origin_list2 = [2, 7, 4, 3, 5]
    origin_list3 = [1, 7, 5, 1, 9, 2, 5, 1]
    origin_link1 = DataTransformat.list_2_link(origin_list1)
    origin_link2 = DataTransformat.list_2_link(origin_list2)
    origin_link3 = DataTransformat.list_2_link(origin_list3)
    print(Solution.nextLargerNodes(origin_link1))
    print(Solution.nextLargerNodes(origin_link2))
    print(Solution.nextLargerNodes(origin_link3))

get_next_larger_nodes()
