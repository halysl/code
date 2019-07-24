# -*- coding: utf-8 -*-
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class DataTransformat:
    @staticmethod
    def list_2_link(arrary):
      # 倒插取头
        nex = None
        head = None
        for i in arrary[::-1]:
            head = ListNode(i)
            head.next = nex
            nex = head
        return head

    @staticmethod
    def link_2_list(link):
        arrary = []
        while link:
            arrary.append(link.val)
            link = link.next
        return arrary