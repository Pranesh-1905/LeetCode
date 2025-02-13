class Solution:
    def minimumSwap(self, s1: str, s2: str) -> int:
        xy=0
        yx=0
        for i,j in zip(s1,s2):
            if i=='x' and j=='y':
                xy+=1
            if i=='y' and j=='x':
                yx+=1
        if (xy+yx)%2!=0:
            return -1
        res=xy//2+yx//2
        if xy%2==1:
            res+=2
        return res
 