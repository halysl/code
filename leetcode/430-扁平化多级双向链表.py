# -*- coding: utf-8 -*-

from utils import DataTransformat, ListNode


class Solution(object):
    def flatten(self, head):
        """
        :type head: Node
        :rtype: Node
        """
        stack = [head] if head else []
        p = None
        while stack:
            node = stack.pop()
            if node.next:
                stack.append(node.next)
            if node.child:
                stack.append(node.child)
            if p:
                p.next = node
                node.prev = p
                p.child = node.child = None
            p = node
        return head
