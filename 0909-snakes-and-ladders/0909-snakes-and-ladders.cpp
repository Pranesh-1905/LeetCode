
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        
        int n = board.size();
        int ind=1;
        vector<int> v(n*n+1,-1);
        bool f=true;
        for(int i=n-1;i>=0;i--){
            if(f){
                for(int j=0;j<n;j++){
                    v[ind++]=board[i][j];
                }
            }
            else{
                for(int j=n-1;j>=0;j--){
                    v[ind++]=board[i][j];
                }
                
            }
            f=!f;
        }    
        queue<pair<int,int>> q;//{pos,roll}
        vector<bool> vis(n*n+1,false);
        q.push({1,0});
        vis[1]=true;
        while (!q.empty()){
            int pos=q.front().first;
            int roll=q.front().second;
            q.pop();
            if(pos==n*n){
                return roll;
            }
            for(int i=1;i<=6;i++){
                int newpos=pos+i;
                if(newpos<=n*n&&!vis[newpos]){
                    vis[newpos]=true;
                    if(v[newpos]!=-1){
                        newpos=v[newpos];
                    }
                    q.push({newpos,roll+1});
                }
            }
        }
        return -1;
    }
};