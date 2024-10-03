class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        a=[]
        b=[]
        res=[]
        for i in range(0,len(nums)):
            if nums[i]%2==0:
                a.append(nums[i])
            else:
                b.append(nums[i])
        for i in range(len(a)):
            res.append(a[i])
            res.append(b[i])
        return res