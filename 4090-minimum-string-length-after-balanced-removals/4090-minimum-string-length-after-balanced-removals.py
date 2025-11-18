class Solution:
    def minLengthAfterRemovals(self, s: str) -> int:
        ca=s.count("a")
        
        cb=s.count("b")
        return abs(ca-cb)
