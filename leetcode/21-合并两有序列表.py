from utils import ListNode, DataTransformat


class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1 is None:
            return l2
        elif l2 is None:
            return l1
        elif l1.val < l2.val:
            l1.next = self.mergeTwoLists(l1.next, l2)
            return l1
        else:
            l2.next = self.mergeTwoLists(l1, l2.next)
            return l2

def merge2list():
    l1 = [1, 2, 4, 5, 7]
    l2 = [3, 6, 9, 10]
    link1 = DataTransformat.list_2_link(l1)
    link2 = DataTransformat.list_2_link(l2)
    res = Solution().mergeTwoLists(link1, link2)
    res_list = DataTransformat.link_2_list(res)
    print(res_list)

merge2list()
