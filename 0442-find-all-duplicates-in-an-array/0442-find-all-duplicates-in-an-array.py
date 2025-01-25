from collections import Counter
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        c=Counter(nums)
        l=[]
        for i in nums:
            if c[i]>1:
                l.append(i)
                
        return list(set(l))