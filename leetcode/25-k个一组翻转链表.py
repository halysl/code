# -*- coding: utf-8 -*-

from utils import DataTransformat, ListNode


class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        dummy = ListNode(None)
        p = dummy
        while True:
            count = k 
            stack = []
            tmp = head
            while count and tmp:
                stack.append(tmp)
                tmp = tmp.next
                count -= 1
            if count:
                # 防止k大于链表长度，虽然题目说不会超过的，但是有个case超过了。。。
                p.next = head
                break
            while stack:
                p.next = stack.pop()
                p = p.next
            p.next = tmp
            head = tmp
        
        return dummy.next



def test_reverseKGroup():
    li = [1, 2, 3, 4, 5]
    link = DataTransformat.list_2_link(li)
    res = Solution().reverseKGroup(link, 2)
    print(DataTransformat.link_2_list(res))

    li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    link = DataTransformat.list_2_link(li)
    res = Solution().reverseKGroup(link, 3)
    print(DataTransformat.link_2_list(res))

    li = [1]
    link = DataTransformat.list_2_link(li)
    res = Solution().reverseKGroup(link, 3)
    print(DataTransformat.link_2_list(res))
