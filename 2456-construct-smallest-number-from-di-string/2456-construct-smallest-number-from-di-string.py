class Solution:
    def smallestNumber(self, pattern: str) -> str:
        n = len(pattern)
        result = ""
        s = []
        
        for i in range(n + 1):
            s.append(i + 1)
            
            if i == n or pattern[i] == 'I':
                while s:
                    result += str(s.pop())
        
        return result