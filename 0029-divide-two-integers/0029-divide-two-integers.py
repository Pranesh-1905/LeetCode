class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        a=dividend/divisor
        if a>(2**31)-1:
            a=(2**31)-1
        if a<0:
            if a<(-2**31):
                a=-2**31
            return math.ceil(a)
        return math.floor(a)
