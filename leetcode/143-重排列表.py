# -*- coding: utf-8 -*-

from utils import DataTransformat


class Solution(object):
    def reorderList(self, head):
        """
        :type head: ListNode
        :rtype: None Do not return anything, modify head in-place instead.
        """
        if head is None or head.next is None:
            return head
        slow = fast = head
        # fast point and slow point to find middle node
        while fast.next and fast.next.next:
            fast = fast.next.next
            slow = slow.next
        # create link2 to reverser second-half link
        link2 = None
        cur = slow.next
        slow.next = None
        while cur:
            tmp = cur.next
            cur.next = link2
            link2 = cur
            cur = tmp
        # now have 2 link
        # link1 -> first-half link; link2 -> reversed second-half link
        link1 = head
        # Sequential connection 2 link
        while link1:
            if link2 is None:
                break
            tmp = link1.next
            link1.next = link2
            link2 = link2.next
            link1.next.next = tmp
            link1 = link1.next.next
        return head
            
def test_reorderList():
    res1 = DataTransformat.link_2_list(Solution().reorderList(DataTransformat.list_2_link([1, 2, 3, 4])))
    assert res1 == [1, 4, 2, 3]

    res2 = DataTransformat.link_2_list(Solution().reorderList(DataTransformat.list_2_link([1, 2, 3, 4, 5])))
    assert res2 == [1, 5, 2, 4, 3]
