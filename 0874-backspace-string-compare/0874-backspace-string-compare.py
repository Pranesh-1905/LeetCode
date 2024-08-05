class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        a=[]
        b=[]
        for i in s:
            if i != '#':
                a.append(i)
            elif a:
                a.pop()
        for i in t:
            if i != '#':
                b.append(i)
            elif b:
                b.pop()
        
        return a==b
            