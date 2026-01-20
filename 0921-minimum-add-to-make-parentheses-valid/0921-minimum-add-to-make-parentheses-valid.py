from collections import Counter
class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        l=[]
        for i in s:
            if i=='(':
                l.append(i)
            else:
                if l and l[-1]=='(':
                    l.pop()
                else:
                    l.append(i)

        return len(l)        