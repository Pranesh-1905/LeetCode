class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int >> adj(numCourses);
        vector<int> in(numCourses,0);
        vector<int> ans;
        for(auto i:prerequisites){
            adj[i[1]].push_back(i[0]);
            in[i[0]]++;
        }
        queue<int> q;
        for(auto i=0;i<numCourses;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int n=q.front();
            q.pop();
            ans.push_back(n);
            for(auto i:adj[n]){
                in[i]--;
                if(in[i]==0){
                    q.push(i);
                }
            }
        }
          if (ans.size() != numCourses)
            return {};
        return ans;
        
    }
};