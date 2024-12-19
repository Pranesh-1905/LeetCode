# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        str1=""
        str2=""
        while l1:
            str1+=str(l1.val)
            l1=l1.next
        while l2:
            str2+=str(l2.val)
            l2=l2.next
        ans=int(str1[::-1])+int(str2[::-1])
        l=[]
        for i in str(ans):
            l.append(i)
        l=l[::-1]
        dummy=ListNode(0)
        cop=dummy
        for (i) in l:
            cop.next=ListNode(int(i))
            cop=cop.next
        return dummy.next