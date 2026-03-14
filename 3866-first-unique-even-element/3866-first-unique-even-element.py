from collections import Counter
class Solution:
    def firstUniqueEven(self, nums: list[int]) -> int:
        c=Counter(nums)
        for i in nums:
            if i%2==0 and c[i]==1:
                return i
        return -1