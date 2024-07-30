class Solution(object):
    def singleNumber(self, nums):
        a=Counter(nums)
        for i in a:
            if a[i]==1:
                return i
        