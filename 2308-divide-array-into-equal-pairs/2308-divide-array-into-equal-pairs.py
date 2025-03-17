class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        n=len(nums)//2
        nums.sort()
        for i in range(0,len(nums),2):
            if nums[i]!=nums[i+1]:
                return False
        return True