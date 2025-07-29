class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums=set(nums)
        longs=0
        for n in nums:
            if n-1 not in nums:
                l=1
                while n+l in nums:
                    l+=1
                longs=max(longs,l)
        return longs