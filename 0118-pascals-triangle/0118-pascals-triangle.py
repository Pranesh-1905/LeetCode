class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res=[[1]]
        for i in range(numRows-1):
            a=[0]+res[-1]+[0]
            row=[]
            for j in range(len(res[-1])+1):
                row.append(a[j]+a[j+1])
            res.append(row)
        return res