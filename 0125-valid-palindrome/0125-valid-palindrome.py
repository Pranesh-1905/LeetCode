class Solution:
    def isPalindrome(self, s: str) -> bool:
        p=""
        for i in s:
            if i.isalnum():
                p+=i.lower()
        return p==p[::-1]