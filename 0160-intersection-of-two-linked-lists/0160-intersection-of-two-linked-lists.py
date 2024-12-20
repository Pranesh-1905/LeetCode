# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        li1 = []
        li2 = []
        
        while headA:
            li1.append(headA)
            headA = headA.next
        
        while headB:
            li2.append(headB)
            headB = headB.next
        
        prev = None
        while li1 and li2:
            nodesa = li1.pop()
            nodesb = li2.pop()

            if nodesa != nodesb:
                return prev
            prev = nodesa
        
        return prev
        
        
        