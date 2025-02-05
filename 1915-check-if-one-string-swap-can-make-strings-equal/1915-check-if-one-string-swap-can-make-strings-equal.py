from collections import Counter
class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        if s1==s2:
            return True
        if len(s1)!=len(s2):
            return False
        arr, x = list(s1), -1
        for i in range(len(s1)):
            if arr[i] != s2[i]:
                if x == -1:
                    x = i
                else:
                    arr[i], arr[x] = arr[x], arr[i]
                    return ''.join(arr) == s2
        return s1 == s2