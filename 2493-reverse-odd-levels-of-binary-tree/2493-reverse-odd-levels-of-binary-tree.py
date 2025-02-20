# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def help(root1,root2,level):
            if root1 is None or root2 is None:
                return

            if level%2!=0:
                root1.val,root2.val=root2.val,root1.val

            help(root1.left,root2.right,level+1)
            help(root1.right,root2.left,level+1)

        help(root.left,root.right,1)
        return root
            