class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        r=len(strs)
        c=len(strs[0])
        co=0
        for i in range(c):
            for j in range(1,r):
                if strs[j][i]<strs[j-1][i]:
                    co+=1
                    break
        return co