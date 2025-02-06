class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        def check(mat,n,row,col):
            # Check vertical up
            i, j = row, col
            while i >= 0 and j >= 0:
                if mat[i][j] == 'Q':
                    return False
                i -= 1
            # Check left diagonal
            i, j = row, col
            while i >= 0 and j >= 0:
                if mat[i][j] == 'Q':
                    return False
                i -= 1
                j -= 1

            # Check right diagonal
            i, j = row, col
            while i >= 0 and j < n:
                if mat[i][j] == 'Q':
                    return False
                i -= 1
                j += 1

            return True
        

        def solve(mat,n,row):
            if row==n:
                result.append(["".join(row) for row in mat])

            else:
                for i in range(n):
                    if check(mat,n,row,i):
                        mat[row][i]="Q"
                        solve(mat,n,row+1)
                        mat[row][i]='.'
        result=[]
        board=[['.' for _ in range(n)] for _ in range(n)]
        solve(board,n,0)
        return result