class Solution:
    def earliestTime(self, tasks: List[List[int]]) -> int:
        a=[]
        for  i in tasks:
            a.append(i[0]+i[1])
        return min(a)