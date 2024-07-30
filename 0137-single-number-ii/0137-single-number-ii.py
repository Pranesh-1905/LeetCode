class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        a=Counter(nums)
        for i in a:
            if a[i]!=3:
                return i
