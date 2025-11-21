class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> st;
        for(auto i:s){
            st.insert(i);
        }
        unordered_set<char> res;
        int ans=0;
        for(auto i: st){
            auto l=s.find(i);
            auto r=s.rfind(i);
            for(int i=l+1;i<r;i++){
                res.insert(s[i]);
            }
        
            ans+=res.size();
            res.clear();
        }
        return ans;
    }
};