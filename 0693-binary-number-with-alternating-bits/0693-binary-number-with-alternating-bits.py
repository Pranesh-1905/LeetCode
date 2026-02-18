class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        b=bin(n)[2:]
        prev=-1
        for i in b:
            if prev==i:
                return False
            prev=i
        return True