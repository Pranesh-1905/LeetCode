class Solution {
public:
    vector<vector<vector<char>>> all;
    bool check(int r,int c,vector<vector<char>> b,int n){
        int i,j;
        for(i=0;i<n;i++){
            if(b[i][c]=='Q'){
                return false;
            }
        }
        for(i=r,j=c;i>=0&&j>=0;i--,j--){
            if(b[i][j]=='Q'){
                return false;
            }
        }
        
        for(i=r,j=c;i>=0&&j<n;i--,j++){
            if(b[i][j]=='Q'){
                return false;
            }
        }
        return true;
        
    }
    void solve(int r,vector<vector<char>> &b,int n){
        if(r==n){
            all.push_back(b);

        }
        for(int i=0;i<n;i++){
            if(check(r,i,b,n)){
                b[r][i]='Q';
                solve(r+1,b,n);
                b[r][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> b(n,vector<char>(n,'.'));
        solve(0,b,n);
        vector<vector<string>> ans;
        for(auto i:all){
            vector<string> temp;
            for(auto j:i){
                string s="";
                for(auto k:j){
                    s+=k;
                }
                temp.push_back(s);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};