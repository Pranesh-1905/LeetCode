class Solution:
    def countCommas(self, n: int) -> int:
        c=0
        if n>=1000:
            for i in range(1000,n+1):
                d=len(str(i))
                c+=(d-1)//3

        return c