class Solution:
    def findPeakGrid(self, mat: List[List[int]]) -> List[int]:
        for i in mat:
            i.insert(0, -1)
            i.append(-1)
        mat.insert(0, [-1] * (len(mat[0])))
        mat.append([-1] * len(mat[0]))
        for i in range(1, len(mat) - 1):
            for j in range(1, len(mat[0]) - 1):
                if mat[i][j] > mat[i + 1][j] and mat[i][j] > mat[i - 1][j] and mat[i][j] > mat[i][j + 1] and mat[i][j] > mat[i][j - 1]:

                    return [i - 1, j - 1]
        return [-1, -1]
