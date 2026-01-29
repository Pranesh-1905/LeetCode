class Solution {
public:
    int maxDepth(string s) {
        int p=0;
        int m=0;
        for(auto i:s){
            if(i=='('){
                p++;
            }
            else if(i==')'){
                p--;
            }
            m=max(p,m);
        }
        return m;
    }
};