# -*- coding: utf-8 -*-

from utils import ListNode, DataTransformat, exec_time


class Solution:
    def splitListToParts(self, root, k):
        tmp = root
        length = 0
        result = []
        while tmp:
            length += 1
            tmp = tmp.next
        avg = length // k
        remainder = length % k
        for i in range(k):
            result.append(root)
            if root:
                # 余数必定小于k
                range_max = avg + 1 if i < remainder else avg
                for j in range(1, range_max):
                    root = root.next
                end_node = root.next
                root.next = None
                root = end_node
        return result


def split_list_to_parts(test_li, test_part):
    test_link = DataTransformat.list_2_link(test_li)
    result = Solution().splitListToParts(test_link, test_part)
    for i in result:
        print(DataTransformat.link_2_list(i))

with exec_time():
    split_list_to_parts([1, 2, 3, 4], 5)

with exec_time():
    split_list_to_parts([1, 2, 3, 4, 5], 3)

with exec_time():
    split_list_to_parts([1, 2, 3, 4], 1)
