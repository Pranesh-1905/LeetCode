class Solution:
    def canBeIncreasing(self, nums: List[int]) -> bool:
        for i in range(len(nums)):
            tem=nums[:i]+nums[i+1:]
            if sorted(tem)==tem:
                if len(set(tem))==len(tem):
                    return True
        return False