class Solution:
    def getPermutation(self, n: int, k: int) -> str:
        a=''
        for i in range(1,n+1):
            a+=str(i)
        p=list(permutations(a))
        ele=p[k-1]
        a=''
        for i in ele:
            a+=i
        return a