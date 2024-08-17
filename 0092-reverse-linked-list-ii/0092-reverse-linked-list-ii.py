# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        if not head or left==right:
            return head
        a=[]
        while head:
            a.append(head.val)
            head=head.next
        
        a[left-1:right] = a[left-1:right][::-1]
        l=ListNode(0)
        dum=l
        for i in a:
            dum.next=ListNode(i)
            dum=dum.next
        return l.next