class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<vector<int>> v(c, vector<int>(r));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                v[j][i]=matrix[i][j];

            }
        }
        for(int i=0;i<r;i++){
            reverse(v[i].begin(),v[i].end());
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrix[i][j]=v[i][j];

            }
        }
        
    }
};