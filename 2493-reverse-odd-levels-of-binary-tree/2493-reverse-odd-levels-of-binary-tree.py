# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        d=defaultdict(list)
        def dfs(node,lev):
            if not node :
                return
            d[lev].append(node)
            dfs(node.left,lev+1)
            dfs(node.right,lev+1)
        dfs(root,0)
        for i in range(len(d)):
            if i%2==1:
                l,r=0,len(d[i])-1
                while l<r:
                    d[i][l].val,d[i][r].val=d[i][r].val,d[i][l].val
                    l+=1
                    r-=1
                    
        return root


        # for lev in range(len(d)):
        #     if lev%2==1:
        #         arr.append(d[lev][::-1])
        #     else:
        #         arr.append(d[lev])