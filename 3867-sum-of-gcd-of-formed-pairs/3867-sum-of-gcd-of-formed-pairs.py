
class Solution:
    def gcdSum(self, nums: list[int]) -> int:
        n=len(nums)
        pre=[]
        mxi = 0
        for i in range(n):
            mxi = max(mxi, nums[i])
            pre.append(math.gcd(nums[i], mxi))
        pre.sort()
        l,r=0,n-1
        s=0
        while l<r:
            s+=math.gcd(pre[l],pre[r])
            l+=1
            r-=1
        return s