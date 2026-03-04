class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n,m;
        n=mat.size();
        m=mat[0].size();
        int co=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                bool r=true ,c=true;
                if(mat[i][j]==1){
                    for(int k=0;k<n;k++){
                        if( i!=k&& mat[k][j]==1){
                            c=false;
                        }
                    }
                    for(int k=0;k<m;k++){
                        if( j!=k&& mat[i][k]==1){
                            r=false;
                        }
                    }

                if(r&&c) 
                co++;
                }
            }
        }
        return co;
    }
};