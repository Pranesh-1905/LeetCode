class Solution:
    def minMaxGame(self, nums: List[int]) -> int:
        n=len(nums)
        if n==1:
            return nums[0]
        newnums=[]
        for i in range(0,n//2):
            if i%2==0:
                newnums.append(min(nums[2*i],nums[2*i+1]))
            else:
                newnums.append(max(nums[2*i],nums[2*i+1]))

        return self.minMaxGame(newnums)
                
            
        