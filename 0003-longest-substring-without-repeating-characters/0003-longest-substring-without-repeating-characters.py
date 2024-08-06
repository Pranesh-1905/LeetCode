class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        #we use sliding window concept here:
        se=set()
        left=0
        result=0
        for right in range(len(s)):
            while s[right] in se:
                se.remove(s[left])
                left+=1
            se.add(s[right])
            result=max(result,right-left+1)
        return result