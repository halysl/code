# -*- coding: utf-8 -*-

from utils import DataTransformat, ListNode

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        stack1 = []
        while l1:
            stack1.append(l1.val)
            l1 = l1.next
        
        stack2 = []
        while l2:
            stack2.append(l2.val)
            l2 = l2.next
        
        next_value = 0
        new_head = None
        v_head = None
        while stack1 or stack2:
            value1 = stack1.pop() if stack1 else 0
            value2 = stack2.pop() if stack2 else 0
            
            v_head = ListNode((value1 + value2 + next_value) % 10)
            v_head.next = new_head
            new_head = v_head
            next_value = (value1 + value2 + next_value) // 10
        if next_value:
            v_head = ListNode(next_value)
            v_head.next = new_head
            new_head = v_head
        return v_head

def add_2_numbers():
    list_1 = [7, 2, 4, 3]
    link_1 = DataTransformat.list_2_link(list_1)

    list_2 = [5, 6, 4]
    link_2 = DataTransformat.list_2_link(list_2)
    
    res_link = Solution().addTwoNumbers(link_1, link_2)
    res_list = DataTransformat.link_2_list(res_link)
    print(res_list)
