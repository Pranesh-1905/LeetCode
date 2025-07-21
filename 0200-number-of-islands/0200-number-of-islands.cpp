class Solution {
public:
    void check(vector<vector<char>>&grid,vector<vector<bool>>&visited,int r,int c){
        if(r<0||r>=grid.size()||c<0||c>=grid[0].size()||grid[r][c]=='0'||visited[r][c]){
            return ;
        }
        visited[r][c]=true;
        check(grid,visited,r+1,c);
        check(grid,visited,r-1,c);
        check(grid,visited,r,c+1);
        check(grid,visited,r,c-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!visited[i][j]&&grid[i][j]=='1'){
                    check(grid,visited,i,j);
                        c++;
                    
                }
            }
        }
        return c;
    }
};