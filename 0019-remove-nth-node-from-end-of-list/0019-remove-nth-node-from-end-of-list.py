# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        a=[]
        while head!=None:
            a.append(head.val)
            head=head.next
        del a[-n]
        dummy = ListNode(0)
        temp = dummy
        for val in a:
            temp.next = ListNode(val)
            temp = temp.next
        return dummy.next
        
        