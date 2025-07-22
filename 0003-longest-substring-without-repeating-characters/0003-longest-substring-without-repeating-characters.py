class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        str_sub = ""
        maxlen = 0
        for ch in s:
            pos = str_sub.find(ch)
            if pos != -1:
                str_sub = str_sub[pos + 1:]
            str_sub += ch
            maxlen = max(maxlen, len(str_sub))
        return maxlen
