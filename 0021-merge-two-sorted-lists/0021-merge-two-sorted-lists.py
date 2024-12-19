# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        l1,l2=[],[]
        while list1:
            l1.append(list1.val)
            list1=list1.next
        while list2:
            l2.append(list2.val)
            list2=list2.next
        l=sorted(l1+l2)
        dummy=ListNode(0)
        cop=dummy
        for i in l:
            cop.next=ListNode(i)
            cop=cop.next
        return dummy.next
        