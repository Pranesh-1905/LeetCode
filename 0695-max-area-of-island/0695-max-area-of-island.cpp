class Solution {
public:
    int check(vector<vector<int>>&grid ,vector<vector<bool>>&vis,int r,int c){
        if(r<0||r>=grid.size()||c<0||c>=grid[0].size()||vis[r][c]||grid[r][c]==0){
            return 0;
        }
        vis[r][c]=true;

        return 1+check(grid,vis,r+1,c)+ check(grid,vis,r-1,c)+ check(grid,vis,r,c+1)+ check(grid,vis,r,c-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=0;
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j]&&grid[i][j]==1){
                    int c=check(grid,vis,i,j);
                    m=max(m,c);
                }
            }
        }
        return m;
    }
};