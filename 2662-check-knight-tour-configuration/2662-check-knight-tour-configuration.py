class Solution:
    def checkValidGrid(self, grid: List[List[int]]) -> bool:
        n=len(grid)
        def solve(mat,n,step,r,c):
            if step==n*n:
                return True
            l=[(1,2),(-1,-2),(1,-2),(-1,2),(2,1),(-2,-1),(-2,1),(2,-1)]
            for row,col in l:
                new_r=row+r
                new_c=col+c
                if new_r>=0 and new_r<n and new_c>=0 and new_c<n and mat[new_r][new_c]==step:
                    if solve(mat,n,step+1,new_r,new_c):
                        return True
            return False
        if grid[0][0]!=0:
            return False
        return solve(grid,n,1,0,0)
                
                    

            