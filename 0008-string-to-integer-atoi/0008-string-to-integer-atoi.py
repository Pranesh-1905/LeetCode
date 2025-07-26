class Solution:
    def myAtoi(self, s: str) -> int:

        s=s.lstrip()
        if not s:
            return 0
        sign=1
        a=0

        if s[0]=='-':
            sign=-1
        for i in range(len(s)):
            if i==0 and (s[i]=='+' or s[i]=='-'):
                continue
            elif s[i].isdigit():
                a=a*10+int(s[i])
            else:
                break
        if -2**31<=a*sign<=2**31-1:
            return a*sign 
        elif(sign==-1):
            return -2**31
        else:
            return 2**31-1
        