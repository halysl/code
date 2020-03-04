# -*- coding: utf-8 -*-

from utils import DataTransformat

class Solution(object):
    def numComponents(self, head, G):
        """
        :type head: ListNode
        :type G: List[int]
        :rtype: int
        """
        G = set(G)
        res = 0
        seperate = True
        while head:
            if head.val in G:
                if seperate == True:  #当前是一个组件的开头
                    res += 1
                    seperate = False
                head = head.next
            else:
                seperate = True
                head = head.next
        return res
        

def get_numComponents():
    print(Solution().numComponents(DataTransformat.list_2_link([0, 1, 2, 3]), [0, 1, 3]))
