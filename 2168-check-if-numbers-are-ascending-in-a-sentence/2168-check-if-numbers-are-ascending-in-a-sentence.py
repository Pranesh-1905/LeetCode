class Solution:
    def areNumbersAscending(self, s: str) -> bool:
        l=s.split(" ")
        lis=[]
        maxx=0
        for i in l:
            if i.isdigit():
                num=int(i)
                if maxx<num:
                    maxx=num
                else:
                    return False
        return True