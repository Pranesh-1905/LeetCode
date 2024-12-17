class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda i:i[0])
        out=[intervals[0]]
        for s,e in intervals[1:]:
            lastendinter=out[-1][1]
            if s<=lastendinter:
                out[-1][1]=max(lastendinter,e)
            else:
                out.append([s,e])
        return out
             