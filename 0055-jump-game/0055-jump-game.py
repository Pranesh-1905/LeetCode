class Solution:
    def canJump(self, nums: List[int]) -> bool:
        ans=0
        for i in nums:
            if ans<0:
                return False
            if i>ans:
                ans=i
            ans-=1
        return True
