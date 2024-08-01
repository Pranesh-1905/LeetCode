class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        a=Counter(nums)
        ans=[]
        Threshold=len(nums)//3
        for i,j in a.items():
            if j>Threshold:
                ans.append(i)
        return ans
