class Solution:
    def countPartitions(self, nums: List[int]) -> int:
        c=0
        for i in range(len(nums)-1):
            if (sum(nums[:i+1])-sum(nums[i+1:]))%2==0:
                c+=1
        return c
