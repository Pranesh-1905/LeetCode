# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        def h(node, l):
            if node is None:
                return
            if low <= node.val <= high:
                l.append(node.val)
            h(node.left, l)
            h(node.right, l)
        
        l = []
        h(root, l)
        return sum(l)
        