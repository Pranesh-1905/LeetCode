class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        s1=set(nums1)
        s2=set(nums2)
        a=[]
        b=[]
        for i in s1:
            if i not in s2:
                a.append(i)
        for i in s2:
            if i not in s1:
                b.append(i)
        return [a,b]