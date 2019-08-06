# -*- coding: utf-8 -*-

from utils import DataTransformat, ListNode


class Solution(object):
    def oddEvenList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None or head.next is None: 
            return head
        else:
            r, odd, p, head = head, head, head.next, head.next.next
            while head:
                odd.next, head.next, p.next = head, odd.next, head.next
                p, odd, head = p.next, head, p.next and p.next.next
            return r

def get_odd_even_list():
    li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
    link = DataTransformat.list_2_link(li)

    new_link = Solution().oddEvenList(link)
    new_li = DataTransformat.link_2_list(new_link)
    print(new_li)

get_odd_even_list()
