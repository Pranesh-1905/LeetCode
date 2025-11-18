class Solution {
public:
    bool dfs(int r, int c, vector<vector<char>>& board, int ind, string& word,
             vector<vector<int>>& vis) {
        if (ind == word.size()) {
            return true;
        }
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() ||
            vis[r][c] == 1 || word[ind] != board[r][c]) {
            return false;
        }
        vis[r][c] = 1;
        bool found = false;
        found = dfs(r + 1, c, board, ind + 1, word, vis) ||
                dfs(r, c + 1, board, ind + 1, word, vis) ||
                dfs(r - 1, c, board, ind + 1, word, vis) ||
                dfs(r, c - 1, board, ind + 1, word, vis);
        vis[r][c] = 0;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(i, j, board, 0, word, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};