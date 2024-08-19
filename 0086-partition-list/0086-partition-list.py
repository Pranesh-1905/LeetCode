# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        a = []
        b=[]
        temp = head
        while temp:
            if temp.val<x:
                a.append(temp.val)
            else:
                b.append(temp.val)
            temp = temp.next
        b=a+b
        dummy = ListNode(0)
        temp = dummy
        for val in b:
            temp.next = ListNode(val)
            temp = temp.next
        return dummy.next