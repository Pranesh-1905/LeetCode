class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def fi(nums,target):
            left,right=0,len(nums)-1
            while left<=right:
                mid=(left+right)//2
                if nums[mid]<target:
                    left=mid+1
                else:
                    right=mid-1
            return left
        def ls(nums,target):
            left,right=0,len(nums)-1
            while left<=right:
                mid=(left+right)//2
                if nums[mid]>target:
                    right=mid-1
                else:
                    left=mid+1
            return right
        first,last=fi(nums,target),ls(nums,target)
        if first <= last and first < len(nums) and nums[first] == target:
            return [first, last]
        else:
            return [-1, -1]
            
