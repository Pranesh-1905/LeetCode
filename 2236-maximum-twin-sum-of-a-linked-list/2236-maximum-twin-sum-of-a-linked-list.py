# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        lst=[]
        while head:
            lst.append(head.val)
            head=head.next
        
        l=0
        r=len(lst)-1
        lst1=[]
        while l<r:
            summ=lst[l]+lst[r]
            lst1.append(summ)
            l+=1
            r-=1
        return max(lst1)
