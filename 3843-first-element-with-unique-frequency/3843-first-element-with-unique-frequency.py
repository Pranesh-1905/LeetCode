from collections import Counter
class Solution:
    def firstUniqueFreq(self, nums: List[int]) -> int:
        l=[]
        f=[]
        c=Counter(nums)
        fc=Counter(c.values())
        for i in nums:
            if fc[c[i]]==1:
                return i
        return -1
        
