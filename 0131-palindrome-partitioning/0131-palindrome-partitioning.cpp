class Solution {
public:
    void backtrack(int i,string s,vector<vector<string>> &ans,vector<string> &temp){
        if(i>=s.size()){
            ans.push_back(temp);
            
        }
        else{
            for(int j=i;j<s.size();j++){
                if(ispal(s,i,j)){
                    temp.push_back(s.substr(i,j-i+1));
                    backtrack(j+1,s,ans,temp);
                    temp.pop_back();
                }
            }
        }
    }
    bool ispal(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        backtrack(0,s,ans,temp);
        return ans;
    }
};