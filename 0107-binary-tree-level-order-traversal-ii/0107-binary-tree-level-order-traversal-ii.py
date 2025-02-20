# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        def help(root,lev,l):
            if root is None:
                return
            if len(l)<=lev:
                l.append([])
            l[lev].append(root.val)
            help(root.left,lev+1,l)
            help(root.right,lev+1,l)
        l=[]
        help(root,0,l)
        return l[::-1]
        