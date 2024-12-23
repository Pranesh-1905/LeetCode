class Solution:
    def minTimeToType(self, word: str) -> int:
        res=0
        cur=97#ascii of a
        for i in word:
            clockwise=abs(ord(i)-cur)
            anticlock=26-clockwise
            res+=min(clockwise,anticlock)+1
            cur=ord(i)
        return res