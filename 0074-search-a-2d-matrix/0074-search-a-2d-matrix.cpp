class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int a=matrix.size();
        if(a==0) return 0;
        int b=matrix[0].size();
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(matrix[i][j]==target){
                    return 1;
                }
            }
        }
        return 0;
    }
};