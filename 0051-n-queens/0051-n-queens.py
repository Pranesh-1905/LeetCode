class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        def check(mat,n,row,col):
            i,j=row,col
            while j>=0 and i>=0:
                if mat[i][j]=="Q":
                    return False
                i-=1
            
            i,j=row,col
            while j>=0 and i>=0:
                if mat[i][j]=="Q":
                    return False
                i-=1
                j-=1
            
            i,j=row,col
            while j<n and i>=0:
                if mat[i][j]=="Q":
                    return False
                i-=1
                j+=1
            return True   
            

        def solve(mat,n,row):
            if row==n:
                res.append(["".join(row) for row in mat])
            else:
                for col in range(n):
                    if check(mat,n,row,col):
                        mat[row][col]='Q'
                        solve(mat,n,row+1)
                        mat[row][col]='.'
        res=[]
        board=[["." for i in range(n)] for i in range(n)]
        solve(board,n,0)
        return res