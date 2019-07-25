# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

    def __str__(self):
        if self.next is None:
            return "self.value = {self.val} self.next is None".format(self=self)
        return "self.value = {self.val} self.next.val = {self.next.val}".format(self=self)


class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        p = Solution().reverseList(head.next)
        head.next.next = head
        head.next = None
        return p
    
    def reverseList2(self, head: ListNode) -> ListNode:
        if head is None or head.next is None:
            return head
        thead = None
        while head:
            temp = head.next
            head.next = thead
            thead = head
            head = temp
        return thead


if __name__ == "__main__":
    n1 = ListNode(1)
    n2 = ListNode(2)
    n3 = ListNode(3)
    n4 = ListNode(4)
    n5 = ListNode(5)
    n1.next = n2
    n2.next = n3
    n3.next = n4
    n4.next = n5
    print(n5)
    h = Solution().reverseList(n1)
    print(h)
