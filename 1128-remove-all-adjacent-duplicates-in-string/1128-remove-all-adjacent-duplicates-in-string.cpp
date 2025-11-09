class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        for(auto i: s){
            if(!res.empty()&&res.back()==i){
                res.pop_back();
            }
            else{
                res+=i;
            }
        }
        return res;
    }
};