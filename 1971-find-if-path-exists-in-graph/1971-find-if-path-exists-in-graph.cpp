class Solution {
public:
    bool dfs(int node,int d,vector<vector<int>>&adj,vector<bool>&vis){
        if(node==d){
            return true;
        }
        vis[node]=true;
        for(auto i:adj[node]){
            if(!vis[i]){
                if(dfs(i,d,adj,vis)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>> adj(n); 

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n,false);
        return dfs(source,destination,adj,vis);

    }
};