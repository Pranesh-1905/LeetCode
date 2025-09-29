from collections import Counter
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        c=Counter(nums)
        ans=0
        m=0
        for i in c.values():
            m=max(m,i)
        for i in c.values():
            if i==m:
                ans+=i
        return ans
