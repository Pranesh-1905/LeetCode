class Solution:
    def removeZeros(self, n: int) -> int:
        s=str(n)
        n=s.replace("0","")
        return int(n)