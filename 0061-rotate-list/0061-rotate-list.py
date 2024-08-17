# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return None
        a=[]
        while head:
            a.append(head.val)
            head=head.next
        k=k%len(a)
        b=a[-k:]+a[:-k]
        c=ListNode(0)
        dummy=c
        for i in b:
            dummy.next=ListNode(i)
            dummy=dummy.next
        return c.next