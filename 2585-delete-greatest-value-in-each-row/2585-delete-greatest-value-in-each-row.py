class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        for i in grid:
            i.sort()
        total=0
        while any(grid):
            m=[row.pop() for row in grid]
            total+=max(m)
        return total