class Solution:
    def countBits(self, n: int) -> List[int]:
        a=[]
        for i in range(n+1):
            a.append(bin(i)[2:])
        b=[]
        for i in a:
            b.append(i.count('1'))
        return b

        