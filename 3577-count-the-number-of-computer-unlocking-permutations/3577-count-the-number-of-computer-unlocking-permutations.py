class Solution:
    def countPermutations(self, complexity: List[int]) -> int:
        if complexity[0]>=min(complexity[1:]) :
            return 0
        else:
            return factorial(len(complexity)-1)%1000000007