class Solution:
    def countCommas(self, n: int) -> int:
        c = 0
        
        if n >= 1000:
            c += n - 999
        if n >= 1_000_000:
            c += n - 999_999
        if n >= 1_000_000_000:
            c += n - 999_999_999
        if n >= 1_000_000_000_000:
            c += n - 999_999_999_999
        if n >= 1_000_000_000_000_000:
            c += n - 999_999_999_999_999
        
        return c
