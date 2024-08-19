class Solution:
    def minSteps(self, n: int) -> int:
        if n==1:
            return 0
        a=0
        factor=2
        while n>1:
            while n%factor==0:
                a+=factor
                n//=factor
            factor+=1
        return a