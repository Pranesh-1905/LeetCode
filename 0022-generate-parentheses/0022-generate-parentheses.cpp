class Solution {
public:
    void gen(int op,int cl,vector<string> &ans,string s,int n){
        if(op==cl&&op+cl==n*2){
            ans.push_back(s);
        }
        if(op<n){
            gen(op+1,cl,ans,s+'(',n);
        }
        if(cl<op){
            gen(op,cl+1,ans,s+')',n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> a;
        gen(0,0,a,"",n);
        return a;
    }
};