class Solution {
public:
    void perm(int l,int r,vector<int> &nums,vector<vector<int>> &ans){
        if(l==r){
            ans.push_back(nums);
        }
        else{
            for(int i=l;i<=r;i++){
                swap(nums[l],nums[i]);
                perm(l+1,r,nums,ans);
                swap(nums[l],nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(0,nums.size()-1,nums,ans);
        return ans;
    }
};