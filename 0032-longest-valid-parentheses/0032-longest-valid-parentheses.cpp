class Solution {
public:
    void isvalid(string s,stack<int> &st,int &maxlen){
        st.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    maxlen=max(maxlen,i-st.top());

                }
                else{
                    st.push(i);
                }
            }
        }
        st.push(maxlen);
    }
    int longestValidParentheses(string s) {
        int maxlen=0;
        stack<int> st;
        isvalid(s,st,maxlen);
        return st.top();
    }
};