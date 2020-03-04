# -*- coding: utf-8 -*-

from utils import DataTransformat, ListNode


class Solution(object):
    def insertionSortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        dummy = ListNode(None)
        pre = dummy
        cur = head
        while cur:
            tmp = cur.next
            while pre.next and pre.next.val < cur.val:
                pre = pre.next
            cur.next = pre.next
            pre.next = cur
            pre= dummy
            cur = tmp
        return dummy.next


def test_insertionSortList():
    print(DataTransformat.link_2_list(Solution().insertionSortList(DataTransformat.list_2_link([1, 3, 5, 2, 4]))))
    print(DataTransformat.link_2_list(Solution().insertionSortList(DataTransformat.list_2_link([2, 9, 3, 1, 7]))))
    print(DataTransformat.link_2_list(Solution().insertionSortList(DataTransformat.list_2_link([2, 3, 3, 1, 2]))))
    print(DataTransformat.link_2_list(Solution().insertionSortList(DataTransformat.list_2_link([123, 3, 2, 1, -2]))))


test_insertionSortList()