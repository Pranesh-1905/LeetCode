# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        a=[]
        while head:
            a.append(head.val)
            head=head.next
        a=sorted(a,reverse=True)
        dummy = None
        
        for node in a:
            head = ListNode(node)
            head.next = dummy
            dummy = head
            
        return dummy
