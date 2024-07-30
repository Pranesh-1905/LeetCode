class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in nums2:
            nums1.append(i)
        nums1.sort()
        length=len(nums1)
        if length%2==1:
            return nums1[length//2]
        else:
            mid1 = length // 2 - 1
            mid2 = length // 2
            return (nums1[mid1] + nums1[mid2]) / 2.0
