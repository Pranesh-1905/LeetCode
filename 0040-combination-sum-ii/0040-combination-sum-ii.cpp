class Solution {
public:
    void comb(int st,int tar,vector<int>candidates ,vector<vector<int>> &ans,vector<int>temp){
        if(tar==0){
            ans.push_back(temp);
        }
        else{
            for(int i=st;i<candidates.size();i++){
                if(candidates[i]>tar) break;
                if (i > st && candidates[i] == candidates[i - 1]) continue;

                temp.push_back(candidates[i]);
                comb(i+1,tar-candidates[i],candidates,ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int >> ans;
        vector<int> temp;
        comb(0,target,candidates,ans,temp);
        return ans;
    }
};