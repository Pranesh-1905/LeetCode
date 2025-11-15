class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            vector<vector<int>> adj (numCourses);
            vector<int> in(numCourses,0);
            for(auto i: prerequisites){
                adj[i[1]].push_back(i[0]);
                in[i[0]]++;
            }
            queue<int> q;
            for(int i=0;i<numCourses;i++){
                if(in[i]==0)
                q.push(i);
            }
            int c=0;
            while(!q.empty()){
                int n=q.front();
                q.pop();
                c++;
                for(int i:adj[n]){
                    in[i]--;
                    if(in[i]==0){
                        q.push(i);;
                    }
                }
            }

            
        return c==numCourses;
        }
    
};