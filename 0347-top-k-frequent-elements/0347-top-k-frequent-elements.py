from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        l=[]
        c=Counter(nums)
        for n,fre in c.items():
            l.append([fre,n])
        l.sort(reverse=True,key=lambda x:x[0])
        res=[]
        for i in range(k):
            res.append(l[i][-1])
        return res