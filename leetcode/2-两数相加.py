# -*- coding: utf-8 -*-

from utils import DataTransformat, ListNode

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        n = l1.val + l2.val
        l3 = ListNode(n % 10)
        l3.next = ListNode(n // 10)
        p1 = l1.next
        p2 = l2.next
        p3 = l3
        while True:
            if p1 and p2:
                sum = p1.val + p2.val + p3.next.val
                p3.next.val = sum % 10
                p3.next.next = ListNode(sum // 10)
                p1 = p1.next
                p2 = p2.next
                p3 = p3.next
            elif p1 and not p2:
                sum = p1.val + p3.next.val
                p3.next.val = sum % 10
                p3.next.next = ListNode(sum // 10)
                p1 = p1.next
                p3 = p3.next
            elif not p1 and p2:
                sum = p2.val + p3.next.val
                p3.next.val = sum % 10
                p3.next.next = ListNode(sum // 10)
                p2 = p2.next
                p3 = p3.next
            else:
                if p3.next.val == 0:
                    p3.next = None
                break
        return l3

def add_2_numbers():
    list_1 = [2, 4, 3]
    link_1 = DataTransformat.list_2_link(list_1)

    list_2 = [5, 6, 4]
    link_2 = DataTransformat.list_2_link(list_2)
    
    res_link = Solution().addTwoNumbers(link_1, link_2)
    res_list = DataTransformat.link_2_list(res_link)
    print(res_list)

add_2_numbers()
