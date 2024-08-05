class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        def process_string(s: str) -> list:
            result = []
            for char in s:
                if char!= '#':
                    result.append(char)
                elif result:
                    result.pop()
            return result
        
        return process_string(s) == process_string(t)
            