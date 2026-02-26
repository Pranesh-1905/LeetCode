class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            int s=intervals[i][0];
            int e=intervals[i][1];
            int prev=ans.back()[1];
            if(s<=prev){
                ans.back()[1]=max(e,prev);
            }
            else{
                ans.push_back({s,e});
            }
        }
        return ans;
    }
    
};