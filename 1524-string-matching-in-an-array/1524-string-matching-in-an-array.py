class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        a=set()
        for i in range(len(words)):
            for j in range(len(words)):
                if i!=j and words[i] in words[j]:
                    a.add(words[i])  
            
        return list(a)