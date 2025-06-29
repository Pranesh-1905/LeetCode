class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        ro=defaultdict(set)
        co=defaultdict(set)
        bo=defaultdict(set)
        for i in range(9):
            for j in range(9):
                if board[i][j]==".":
                    continue
                if board[i][j] in ro[i] or board[i][j] in co[j] or board[i][j] in bo[(i//3,j//3)]:
                    return False
                ro[i].add(board[i][j])
                co[j].add(board[i][j])
                bo[(i//3,j//3)].add(board[i][j])
        return True