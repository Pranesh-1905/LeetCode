class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        #3 conditions
        #add ( only if the open <n
        #add ) only if the close<open
        #valid if opwn ==closed and ==n
        st=[]
        res=[]
        def back(op,cl):
            if op==cl==n:
                res.append("".join(st))
                return
            if op<n:
                st.append("(")
                back(op+1,cl)
                st.pop()
            if cl<op:
                st.append(")")
                back(op,cl+1)
                st.pop()
        back(0,0)
        return res

