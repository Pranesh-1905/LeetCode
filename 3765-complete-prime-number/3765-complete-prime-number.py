class Solution:
    def isprime(self,n):
        if n<=1:
            return False
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                return False
        return True
    def completePrime(self, num: int) -> bool:
        if not self.isprime(num):
            return False
        s=str(num)
        n=len(s)
        for i in range(1,n+1):
            pre=int(s[:i])
            suf=int(s[n-i:])
            if not self.isprime(pre) or not self.isprime(suf):
                return False
        
        return True
