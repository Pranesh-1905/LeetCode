class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort()  
        result = [[]]
        
        start = 0
        for i in range(len(nums)):
            start_index = start if i > 0 and nums[i] == nums[i-1] else 0
            start = len(result)
            for j in range(start_index, start):
                result.append(result[j] + [nums[i]])
        
        return result