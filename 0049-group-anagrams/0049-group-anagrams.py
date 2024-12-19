class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dic={}
        for i in strs:
            a="".join(sorted(i))
            if a not in dic:
                dic[a]=[i]
            else:
                dic[a].append(i)
        return list(dic.values())

