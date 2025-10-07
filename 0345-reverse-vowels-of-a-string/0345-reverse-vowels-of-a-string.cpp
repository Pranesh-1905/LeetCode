class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        for(auto i:s){
            if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')     {
                st.push(i);
            }
        }
        string ans;
        for(auto i:s){
            if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')     {
                ans+=st.top();
                st.pop();
            }
            else{
                ans+=i;
            }
        }
        return ans;
        
    }
};