# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        a=set()
        while head:
            a.add(head.val)
            head=head.next
        a = sorted(list(a))
        dummy=ListNode(0)
        cur=dummy
        for i in a:
            cur.next=ListNode(i)
            cur=cur.next
        return dummy.next
