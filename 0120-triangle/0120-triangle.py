class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        dp=[0]*(len(triangle)+1) #bottom up approach creating the last row +1 [0,0,0,0,0]
        for row in triangle[::-1]:
            for i,n in enumerate(row):
                dp[i]=n+min(dp[i],dp[i+1])# adding current number with the prev min of the diagonals
        return dp[0]