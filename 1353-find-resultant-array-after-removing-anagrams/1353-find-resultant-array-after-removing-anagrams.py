from collections import Counter
class Solution:
    def sameana(self,w1,w2):
        c1=Counter(w1)
        c2=Counter(w2)
        return c1==c2
    def removeAnagrams(self, words: List[str]) -> List[str]:
        j=1
        while j<len(words):
            if self.sameana(words[j-1],words[j]):
                words.pop(j)
            else:
                j+=1
        return words