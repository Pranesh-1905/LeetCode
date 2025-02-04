class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        max_sum = 0
        current_sum = nums[0] 
        for r in range(1, len(nums)):
            if nums[r] > nums[r - 1]:  
                current_sum += nums[r]
            else:  
                max_sum = max(max_sum, current_sum)
                current_sum = nums[r]  
        return max(max_sum, current_sum)  