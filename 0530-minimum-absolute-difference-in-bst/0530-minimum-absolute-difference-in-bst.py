# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        a = []
        def inorder(node):
            if node:
                inorder(node.left)
                a.append(node.val)
                inorder(node.right)
        
        inorder(root)
        a=[i for i in a if i is not None]
        return min(y-x for x,y in zip(a,a[1:])) if len(a)>1 else 0