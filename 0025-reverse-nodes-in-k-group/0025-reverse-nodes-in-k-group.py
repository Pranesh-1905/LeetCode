# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        l=[]
        while head:
            l.append(head.val)
            head=head.next
        for i in range(0,len(l),k):
            if len(l[i:i+k])==k:
                l[i:i+k]=l[i:i+k][::-1]
        dummy=ListNode(0)
        cpy=dummy
        for i in l:
            cpy.next=ListNode(i)
            cpy=cpy.next
        return dummy.next