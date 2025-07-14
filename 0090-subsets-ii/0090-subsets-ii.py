from itertools import combinations
class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        l=[]
        for i in range(len(nums)+1):
            for combo in combinations(nums,i):
                l.append(tuple(sorted(combo)))
        uni=list(set(l))
        return [i for i in uni]