class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        vector<vector<int>> dir={{1,3},{0,2,4},{1,5},{0,4},{1,3,5},{2,4}};
        string tar="123450";
        set<string> vis;
        queue<string> q;
        string start="";
        for(auto i:board){
            for (auto j: i){
                start+=j+'0';
            }
        }
        q.push(start);
        vis.insert(start);
        int s=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string cur=q.front();
                q.pop();
                if(cur==tar){
                    return s;
                }
                int zero=cur.find('0');
                for(auto i:dir[zero]){
                    string next=cur;
                    swap(next[i],next[zero]);
                    if(!vis.count(next)){
                        q.push(next);
                        vis.insert(next);
                    }
                }
            }
            s++;
        }
        return -1;
    }
};