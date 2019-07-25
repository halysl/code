# -*- coding: utf-8 -*-
from utils import ListNode, DataTransformat


class Solution:
    @staticmethod
    def delete_node(node: ListNode):
        node.val, node.next = node.next.val, node.next.next


def delete_node():
    link_str = input("Please input value(split with space):")
    del_node = input("Please input delete value:")

    origin_list = link_str.strip().split(' ')
    origin_link = DataTransformat.list_2_link(origin_list)

    delete_value = del_node.strip().split(' ')

    if (len(delete_value) == 1 and
        delete_value[0] in origin_list and 
        delete_value[0] != origin_list[-1]):
        delete_node = DataTransformat.find_node(origin_link, delete_value[0])
        Solution.delete_node(delete_node)
    else:
        print("您输入的删除值，不在链表内，或在链表最后一项，或链表内有重复的元素")

    res = DataTransformat.link_2_list(origin_link)
    print(res)

delete_node()
