class Solution:
    def sumAndMultiply(self, n: int) -> int:
        if n==0:
            return 0
        s=""
        p=0
        for i in str(n):
            if i!="0":
                s+=i
                p+=int(i)
        return int(s)*p

        