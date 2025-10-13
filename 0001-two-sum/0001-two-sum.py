class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic={}
        for i,j in enumerate(nums):
            if j in dic:
                return [dic[j],i]
            dic[target-j]=i
        return []
