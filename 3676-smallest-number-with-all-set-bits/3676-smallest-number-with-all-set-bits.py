class Solution:
    def smallestNumber(self, n: int) -> int:

        while True:
            b=bin(n)[2:]
            if set(b)== {'1'}:
                return n
            n+=1
        