# -*- coding: utf-8 -*-
from utils import DataTransformat, ListNode


class Solution(object):
    def sortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or not head.next: 
            return head
        slow, fast = head, head.next
        while fast and fast.next:
            fast, slow = fast.next.next, slow.next
        mid, slow.next = slow.next, None
        left, right = self.sortList(head), self.sortList(mid)
        h = res = ListNode(0)
        while left and right:
            if left.val < right.val: 
                h.next, left = left, left.next
            else: 
                h.next, right = right, right.next
            h = h.next
        h.next = left if left else right
        return res.next


def test_sortList():
    print(DataTransformat.link_2_list(Solution().sortList(DataTransformat.list_2_link([4, 2, 1, 3]))))
    print(DataTransformat.link_2_list(Solution().sortList(DataTransformat.list_2_link([-1, 5, 3, 4, 0]))))

test_sortList()
