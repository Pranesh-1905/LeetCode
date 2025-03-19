# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        d=defaultdict(list)
        def dfs(node,l):
            if not node:
                return
            d[l].append(node.val)
            dfs(node.left,l+1)
            dfs(node.right,l+1)
        dfs(root,0)
        return [values if level%2==0 else values[::-1] for level,values in d.items()]
