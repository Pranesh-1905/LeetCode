class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        def inorder(node):
            return inorder(node.left) + [node.val] + inorder(node.right) if node else []
        
        nums = inorder(root)
        nums.sort()
        return min(abs(y - x) for x, y in zip(nums, nums[1:])) if len(nums) > 1 else 0