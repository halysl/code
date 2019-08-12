# -*- coding: utf-8 -*-

from utils import Timer, DataTransformat, ListNode


class Solution(object):
    def reverseBetween(self, head, m, n):
        """
        :type head: ListNode
        :type m: int
        :type n: int
        :rtype: ListNode
        """
        dummy = ListNode(-1)
        dummy.next = head
        pre = dummy
        # 找到翻转链表部分的前一个节点, 1->2->3->4->5->NULL, m = 2, n = 4 指的是 节点值为1
        for _ in range(m-1):
            pre = pre.next
        # 用双指针,进行链表翻转
        node = None
        cur = pre.next
        for _ in range(n-m+1):
            tmp = cur.next
            cur.next = node
            node = cur
            cur = tmp
        # 将翻转部分 和 原链表拼接
        pre.next.next = cur
        pre.next = node
        return dummy.next


def get_reverseBetween():
    li = [1, 2, 3, 4, 5]
    link = DataTransformat.list_2_link(li)
    m = 2
    n = 4
    with Timer() as t:
        res = Solution().reverseBetween(link, m, n)
    res_list = DataTransformat.link_2_list(res)
    print(res_list)
    print(f"cost time {t.elapsed}")

get_reverseBetween()
