from itertools import permutations
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        a=permutations(nums)
        return list(a)