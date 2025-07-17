class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        #3 conditions
        #add ( only if the open <n
        #add ) only if the close<open
        #valid if opwn ==closed and ==n
        res = []

        def back(openP, closeP, s):
            if openP == closeP and openP + closeP == n * 2:
                res.append(s)
                return
            
            if openP < n:
                back(openP + 1, closeP, s + "(")
            
            if closeP < openP:
                back(openP, closeP + 1, s + ")")

        back(0, 0, "")

        return res

