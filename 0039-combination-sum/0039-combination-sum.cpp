class Solution {
public:
    void comb(int st,int target,vector<int> candidates,vector<vector<int >> &ans,vector<int> &temp){
        if (target==0){
            ans.push_back(temp);
        }
        else{
            for(int i=st;i<candidates.size();i++){
                if(i>st&& candidates[i]==candidates[i-1]) continue;
                if(candidates[i]>target) break;
                temp.push_back(candidates[i]);
                comb(i,target-candidates[i],candidates,ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        comb(0,target,candidates,ans,temp);
        return ans;
    }
};