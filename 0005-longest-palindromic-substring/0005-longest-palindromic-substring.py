class Solution:
    def longestPalindrome(self, s: str) -> str:
        longest=""
        if len(s)==1:
            return s
        for i in range(len(s)):
            for j in range(i,len(s)):
                substr=s[i:j+1]
                if substr==substr[::-1] and len(substr)>len(longest):
                    longest=substr
        return longest

    