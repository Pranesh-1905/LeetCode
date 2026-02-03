class Solution:
    def isTrionic(self, nums: List[int]) -> bool:
        for p in range(1,len(nums)-1):
            for q in range(p+1,len(nums)-1):
                f=True
                for i in range(0,p):
                    if nums[i]>=nums[i+1]:
                        f=False
                        break
                if f:
                    for j in range(p,q):
                        if nums[j]<=nums[j+1]:
                            f=False
                            break
                if f:
                    for k in range(q,len(nums)-1):
                        if nums[k]>=nums[k+1]:
                            f=False
                            break
                if f:
                    return True
        return False