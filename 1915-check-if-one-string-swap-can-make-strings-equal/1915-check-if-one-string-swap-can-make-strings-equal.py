from collections import Counter
class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        c=0
        for i,j in zip(s1,s2):
            if i!=j:
                c+=1
        return s1==s2 or sorted(s1)==sorted(s2) and c==2