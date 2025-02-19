# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def convertBST(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        self.cur_sum = 0
        self.dfs(root)
        return root
    def dfs(self, root):
        if not root:
            return
        self.dfs(root.right)
        self.cur_sum += root.val
        root.val = self.cur_sum
        self.dfs(root.left)
