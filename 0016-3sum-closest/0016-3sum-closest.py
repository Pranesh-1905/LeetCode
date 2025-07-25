class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        s=0
        nums.sort()
        close=float('inf')
        for i in range(len(nums)):
            l=i+1
            r=len(nums)-1
            while l<r:
                summ=nums[i]+nums[l]+nums[r]
                if abs(target-summ) <abs(target-close):
                    close=summ
                elif target>summ:
                    l+=1
                elif target<summ:
                    r-=1
                else:
                    return summ
        return close