class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res=[]
        for r in range(len(nums)+1):
            res.extend(combinations(nums,r))
        return res