class Solution:
    def minimumSteps(self, s: str) -> int:
        swap,b=0,0
        for i in s:
            if i=="0":
                swap+=b
            else:
                b+=1
        return swap