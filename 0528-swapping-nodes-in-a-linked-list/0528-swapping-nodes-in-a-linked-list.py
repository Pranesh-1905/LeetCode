# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        l=[]
        while head:
            l.append(head.val)
            head=head.next
        l[k-1],l[-k]=l[-k],l[k-1]
        dummy=ListNode(0)
        cpy=dummy
        for i in l:
            cpy.next=ListNode(i)
            cpy=cpy.next
        return dummy.next