class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        v = [row[:] for row in matrix]
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==0:
                    for k in range(len(matrix[0])):
                        v[i][k]=0
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==0:
                    for k in range(len(matrix)):
                        v[k][j]=0
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                matrix[i][j] = v[i][j]