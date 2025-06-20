class Solution:
    def maxDistance(self, s: str, k: int) -> int:
        a=0
        n=so=w=e=0
        for i in range(len(s)):
            c=s[i]
            if c=='N':
                n+=1
                
            elif c=='S':
                so+=1
            elif c=='E':
                e+=1
            elif c=='W':
                w+=1
            x=abs(n-so)
            y=abs(e-w)
            md=x+y
            dis=md+min(2* k,i+1-md)
            a=max(a,dis)
        return a
