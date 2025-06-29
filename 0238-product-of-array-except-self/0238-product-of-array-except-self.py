class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        zero_count = nums.count(0)
        
        if zero_count > 1:
            return [0] * len(nums)
        
        elif zero_count == 1:
            total_product = 1
            for num in nums:
                if num != 0:
                    total_product *= num
            return [total_product if num == 0 else 0 for num in nums]
        
        else:
            total_product = 1
            for num in nums:
                total_product *= num
            return [total_product // num for num in nums]

