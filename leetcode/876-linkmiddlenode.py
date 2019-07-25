# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def middle_node_1(self, head: ListNode) -> ListNode:
        fast = slow = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        return slow

    def middle_node_2(self, head: ListNode) -> ListNode:
        li = []
        while head:
          li.append(head)
          head = head.next
        middle_len = int((len(li)-1)/2) if len(li) % 2 else int(len(li)/2)
        return li[middle_len]
    
    def middle_node_3(self, head: ListNode) -> ListNode:
        tmp = head
        count = 0
        while tmp:
          tmp = tmp.next
          count += 1
        middle_index = int((count-1)/2) if count % 2 else int(count/2)
        while middle_index:
          head = head.next
          middle_index -= 1
        return head


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


if __name__ == "__main__":
    link_str = input("Please input value(split with space):")

    origin_link = DataTransformat.list_2_link(link_str.strip().split(' '))
    middle_link = Solution().middle_node_1(origin_link)
    result_arrary = DataTransformat.link_2_list(middle_link)
    print(result_arrary)

    origin_link = DataTransformat.list_2_link(link_str.strip().split(' '))
    middle_link = Solution().middle_node_2(origin_link)
    result_arrary = DataTransformat.link_2_list(middle_link)
    print(result_arrary)

    origin_link = DataTransformat.list_2_link(link_str.strip().split(' '))
    middle_link = Solution().middle_node_3(origin_link)
    result_arrary = DataTransformat.link_2_list(middle_link)
    print(result_arrary)
