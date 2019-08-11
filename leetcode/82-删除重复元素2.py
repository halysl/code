# -*- coding: utf-8 -*-

from utils import ListNode, DataTransformat

class Solution:
    def deleteMoreDuplicates(self, head: ListNode) -> ListNode:
        if head == None or head.next == None:
            return head
        v_head = ListNode(None)
        v_head.next = head
        slow = v_head
        fast = v_head.next
        while fast:
            if  fast.next and fast.next.val == fast.val:
                tmp = fast.val
                while fast and tmp == fast.val:
                    fast = fast.next
            else:
                slow.next = fast
                slow = fast
                fast = fast.next
        slow.next = fast
        return v_head.next


def delete_more_duplicate():
    li = [1, 2, 3, 3, 3, 4, 4, 4, 5, 6]
    link = DataTransformat.list_2_link(li)
    res_link = Solution().deleteMoreDuplicates(link)
    res_list = DataTransformat.link_2_list(res_link)
    print(res_list)

delete_more_duplicate()
