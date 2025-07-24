class Solution:
    def gray(self,n):
        if n==1:
            l=[]
            l.append("0")
            l.append("1")
            return l
        ls=self.gray(n-1)
        res=[]
        for i in ls:
            res.append("0"+i)
        for i in ls[::-1]:
            res.append("1"+i)
        return res
    def grayCode(self, n: int) -> List[int]:
        l=self.gray(n)
        arr=[]
        for i in l:
            arr.append(int(i,2))
        return arr