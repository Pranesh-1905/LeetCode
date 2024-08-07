# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        s=[]
        def traverse(root):
            if root is not None:
                s.append(root.val)
                traverse(root.left)
                traverse(root.right)
        traverse(root)
        s.sort()
        return s[k-1]

