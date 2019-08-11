# -*- coding: utf-8 -*-

from utils import ListNode, DataTransformat, exec_time

class Solution(object):
    @staticmethod
    def removeElements(head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        vhead = ListNode(val + 1)
        vhead.next = head
        tmp = vhead
        while tmp.next is not None:
            if tmp.next.val == val:
                tmp.next = tmp.next.next
            else:
                tmp = tmp.next
        return vhead.next


def test_remove_elements():
    li1, del1 = [6], 6
    li2, del2 = [1, 2, 3, 4, 5], 3
    li3, del3 = [1, 2, 3, 4, 5], 6
    li4, del4 = [], 0

    link1 = DataTransformat.list_2_link(li1)
    link2 = DataTransformat.list_2_link(li2)
    link3 = DataTransformat.list_2_link(li3)
    link4 = DataTransformat.list_2_link(li4)
    
    with exec_time():
        res1 = Solution.removeElements(link1, del1)
        res2 = Solution.removeElements(link2, del2)
        res3 = Solution.removeElements(link3, del3)
        res4 = Solution.removeElements(link4, del4)

    show_res1 = DataTransformat.link_2_list(res1)
    show_res2 = DataTransformat.link_2_list(res2)
    show_res3 = DataTransformat.link_2_list(res3)
    show_res4 = DataTransformat.link_2_list(res4)

    print(show_res1)
    print(show_res2)
    print(show_res3)
    print(show_res4)

test_remove_elements()
