class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s=set(nums)
        lon=0
        for i in s:
            #now (i-1) is the start of the sequence
            if (i-1) not in s:
                l=0
                while(i+l) in s:
                    l+=1
                lon=max(lon,l)
        return lon