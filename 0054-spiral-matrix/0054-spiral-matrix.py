class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        l,r=0,len(matrix[0])
        t=0
        b=len(matrix)
        li=[]
        while l<r and t<b:
            for i in range(l,r):
                li.append(matrix[t][i])
            t+=1

            for i in range(t,b):
                li.append(matrix[i][r-1])
            r-=1
            if not (l<r and t<b):
                break
            for i in range(r-1,l-1,-1):
                li.append(matrix[b-1][i])
            b-=1
            for i in range(b-1,t-1,-1):
                li.append(matrix[i][l])
            l+=1
        return li
            