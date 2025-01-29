# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l=[]
        while head:
            l.append(head.val)
            head=head.next
        n=len(l)
        if n%2==0:
            for i in range(0,n,2):
                l[i],l[i+1]=l[i+1],l[i]
        else:
            for i in range(0,n-1,2):
                l[i],l[i+1]=l[i+1],l[i]
        dum=ListNode(0)
        cpy=dum
        for i in l:
            cpy.next=ListNode(i)
            cpy=cpy.next
        return dum.next