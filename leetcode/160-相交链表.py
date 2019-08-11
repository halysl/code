# -*- coding: utf-8 -*-

from utils import ListNode, DataTransformat

class Solution(object):
    @staticmethod
    def getIntersectionNode(headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        ha, hb = headA, headB
        while ha != hb:
            ha = ha.next if ha else headB
            hb = hb.next if hb else headA
        return ha


def get_intersection_node():
    ln1 = ListNode(1)
    ln2 = ListNode(2)
    ln3 = ListNode(3)
    ln4 = ListNode(4)
    ln1.next = ln2
    ln2.next = ln3
    ln3.next = ln4
    ln4.next = None

    ln5 = ListNode(5)
    ln6 = ListNode(6)
    ln5.next = ln6

    ln7 = ListNode(7)
    ln7.next = ln2

    ln8 = ListNode(8)
    ln8.next = ln6

    res = [Solution.getIntersectionNode(ln1, ln5),
        Solution.getIntersectionNode(ln1, ln7),
        Solution.getIntersectionNode(ln1, ln8),
        Solution.getIntersectionNode(ln5, ln7),
        Solution.getIntersectionNode(ln5, ln8)]
    
    for i in res:
        if i is None:
            print("the intersection node value is None")
            continue
        print("the intersection node value is {}".format(i.val))

get_intersection_node()
