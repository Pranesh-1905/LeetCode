class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        a=[]
        c=Counter(arr)
        for val,count in c.items():
            if count==1:
                a.append(val)
        if k>len(a):
            return ""
        else:
            
            return a[k-1]
