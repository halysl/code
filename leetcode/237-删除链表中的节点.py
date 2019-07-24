# -*- coding: utf-8 -*-

from common import ListNode, DataTransformat

class Solution:
    @staticmethod
    def delete_node(node: ListNode): -> None:
        node.val = node
        node.next = node.next.next

if __name__ == "__main__":
    link_str = input("Please input value(split with space):")
    del_node = input("Please input delete value")

    origin_list = link_str.strip().split(' ')
    origin_link = DataTransformat.list_2_link(origin_list)

    delete_value = del_node.strip().split(' ')
    if (len(delete_value) == 1 and
        delete_value[0] in origin_list and 
        delete_value[0] != origin_link[-1]):
        pass
        Solution.delete_node(ListNode(delete_value))
    result_arrary = DataTransformat.link_2_list(middle_link)
    print(result_arrary)
