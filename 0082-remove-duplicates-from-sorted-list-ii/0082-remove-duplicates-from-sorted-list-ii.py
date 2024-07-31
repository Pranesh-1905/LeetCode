# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        a=[]
        while head:
            a.append(head.val)
            head=head.next
        d=Counter(a)
        a.clear()
        for i in d:
            if d[i]==1:
                a.append(i)
        
        dummy=ListNode(0)
        cur=dummy
        for i in a:
            cur.next=ListNode(i)
            cur=cur.next
        return dummy.next
            