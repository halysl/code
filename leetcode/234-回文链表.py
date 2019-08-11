# -*- coding: utf-8 -*-

from utils import ListNode, DataTransformat, exec_time


class Solution:
    @staticmethod
    def isPalindrome1(head):
        if head is None or head.next is None:
            return True
        slow = fast = head
        newhead = None
        while fast and fast.next:
            fast = fast.next.next 
            tmp = slow
            slow = slow.next
            tmp.next = newhead
            newhead = tmp

        # 当链表为偶数个的时候，fast 会指向 None
        # 当链表为奇数个的时候，fast 会指向最后一个节点，但是起 fast.next 指向 None
        # 所以当链表为奇数个的时候，slow 在最中间，那个节点抛弃
        slow = slow.next if fast else slow
        while slow:
            if slow.val != newhead.val:
                return False
            slow = slow.next
            newhead = newhead.next
        return True
    
    @staticmethod
    def isPalindrome2(head):
        if head is None or head.next is None:
            return True
        val_list = []
        slow = fast = head
        while fast and fast.next:
            val_list.append(slow.val)
            fast = fast.next.next 
            slow = slow.next
        
        slow = slow.next if fast else slow
        while slow:
            if slow.val != val_list.pop():
                return False
            slow = slow.next
        return True


def test_isPalindrome():
    li1 = [1, 2, 3, 2, 1]
    li2 = [2]
    li3 = [1, 2, 3, 4]
    li4 = [1, 2, 3, 3, 2, 1]

    link1 = DataTransformat.list_2_link(li1)
    link2 = DataTransformat.list_2_link(li2)
    link3 = DataTransformat.list_2_link(li3)
    link4 = DataTransformat.list_2_link(li4)

    with exec_time():
        print(Solution.isPalindrome1(link1))
        print(Solution.isPalindrome1(link2))
        print(Solution.isPalindrome1(link3))
        print(Solution.isPalindrome1(link4))

    link1 = DataTransformat.list_2_link(li1)
    link2 = DataTransformat.list_2_link(li2)
    link3 = DataTransformat.list_2_link(li3)
    link4 = DataTransformat.list_2_link(li4)

    with exec_time():
        print(Solution.isPalindrome2(link1))
        print(Solution.isPalindrome2(link2))
        print(Solution.isPalindrome2(link3))
        print(Solution.isPalindrome2(link4))

test_isPalindrome()
