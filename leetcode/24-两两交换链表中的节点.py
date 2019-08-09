# -*- coding: utf-8 -*-

from utils import DataTransformat, exec_time


class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None or head.next is None:
            return head;
        tmp = head.next;
        head.next = self.swapPairs(tmp.next);
        tmp.next = head;
        return tmp

def get_swap_pairs():
    li1 = [1, 2, 3, 4, 5, 6]
    li2 = [3, 4, 5, 6, 7]

    link1 = DataTransformat.list_2_link(li1)
    link2 = DataTransformat.list_2_link(li2)

    with exec_time():
        result_link1 = Solution().swapPairs(link1)
    with exec_time():
        result_link2 = Solution().swapPairs(link2)

    result_list1 = DataTransformat.link_2_list(result_link1)
    result_list2 = DataTransformat.link_2_list(result_link2)

    print(result_list1)
    print(result_list2)

get_swap_pairs()
