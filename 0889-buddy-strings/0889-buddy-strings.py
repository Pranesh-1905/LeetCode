class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        c=0
        for i,j in zip(s,goal):
            if i!=j:
                c+=1
        return sorted(s)==sorted(goal)and (c==2 or (c==0 and len(set(s))<len(s))) 
