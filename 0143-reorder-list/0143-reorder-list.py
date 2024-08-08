# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        vals = []
        node = head
        while node:
            vals.append(node)
            node = node.next

        l, r = 0, len(vals) - 1
        while l < r:
            vals[l].next = vals[r]
            l += 1
            if l < r:
                vals[r].next = vals[l]
                r -= 1
        vals[l].next = None