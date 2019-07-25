from utils import ListNode, DataTransformat

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        tmp = head
        if head is None or head.next is None:
            return head
        while True:
            if head.next is None:
                return tmp 
            if head.val == head.next.val:
                head.next = head.next.next
            else:
                head = head.next

def delete_duplicate():
    li = [1,3, 3, 6, 7, 8, 8, 10, 11, 11]
    link = DataTransformat.list_2_link(li)
    res_link = Solution().deleteDuplicates(link)
    res_list = DataTransformat.link_2_list(res_link)
    print(res_list)

delete_duplicate()
