class Solution:
    def frequencySort(self, s: str) -> str:
        from collections import Counter
        c=Counter(s)
        res=""
        l=sorted(c.keys(),key=lambda x:c[x],reverse=True)
        for i in l:
            res += i*c[i]
        return res