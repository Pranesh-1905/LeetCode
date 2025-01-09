from collections import Counter
class Solution:
    def countAndSay(self, n: int) -> str:
        if n==1:
            return '1'
        ans='1'
        for i in range(n-1):
            new_ans=""
            i=0
            while i<len(ans):
                count=1
                while i+1<len(ans) and ans[i]==ans[i+1]:
                    count+=1
                    i+=1
                new_ans+=str(count)+ans[i]
                i+=1
            ans=new_ans
        return ans

        