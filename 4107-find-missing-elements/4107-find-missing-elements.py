class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        l=[]
        nums.sort()
        for i in range(nums[0],nums[-1]):
            if i not in nums:
                l.append(i)
        return l