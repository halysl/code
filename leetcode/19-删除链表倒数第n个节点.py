# -*- coding: utf-8 -*-

from utils import Timer, DataTransformat, ListNode

class Solution(object):
    @staticmethod
    def removeNthFromEnd(head, n):
        """
        :type head: ListNode
        :type n: int
        :rtype: ListNode
        """
        dummy = ListNode(None)
        dummy.next = head
        fast = slow = dummy
        for  i in range(n+1):
            fast = fast.next
        while fast: 
            fast = fast.next
            slow = slow.next
        slow.next = slow.next.next
        return dummy.next

def test_removeNthFromEnd():
    print(DataTransformat.link_2_list(Solution.removeNthFromEnd(DataTransformat.list_2_link([1, 2, 3, 4, 5]), 1)))
    print(DataTransformat.link_2_list(Solution.removeNthFromEnd(DataTransformat.list_2_link([1, 2, 3, 4, 5]), 2)))
    print(DataTransformat.link_2_list(Solution.removeNthFromEnd(DataTransformat.list_2_link([1, 2, 3, 4, 5]), 3)))
    print(DataTransformat.link_2_list(Solution.removeNthFromEnd(DataTransformat.list_2_link([1, 2, 3, 4, 5]), 4)))
    print(DataTransformat.link_2_list(Solution.removeNthFromEnd(DataTransformat.list_2_link([1, 2, 3, 4, 5]), 5)))
    print(DataTransformat.link_2_list(Solution.removeNthFromEnd(DataTransformat.list_2_link([1]), 1)))

test_removeNthFromEnd()
