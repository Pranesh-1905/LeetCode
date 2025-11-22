class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh = 0, time = 0;
        queue<pair<int,int>> q;
        int r = grid.size(), c = grid[0].size();

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == 1) fresh++;
                if(grid[i][j] == 2) q.push({i, j});
            }
        }

        vector<vector<int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};

        while(!q.empty() && fresh > 0){
            int sz = q.size();
            bool infected = false; 

            for(int i = 0; i < sz; i++){
                auto [row, col] = q.front();
                q.pop();

                for(auto &d : dir){
                    int nr = row + d[0];
                    int nc = col + d[1];

                    if(nr < 0 || nr >= r || nc < 0 || nc >= c || grid[nr][nc] != 1)
                        continue;

                    grid[nr][nc] = 2;
                    q.push({nr, nc});
                    fresh--;
                    infected = true; 
                }
            }

            if(infected) time++; 
        }

        return fresh == 0 ? time : -1;
    }
};
