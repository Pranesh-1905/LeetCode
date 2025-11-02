class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        a=[]
        for i in nums:
            a.append(abs(i))
        a.sort()
        return abs(a[-1])*abs(a[-2])*10**5
