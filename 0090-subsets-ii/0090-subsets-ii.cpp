class Solution {
public:
    void back(int i,vector<int> &temp,vector<int>nums,set<vector<int>> &ans){
        if(i==nums.size()){
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        back(i+1,temp,nums,ans);
        temp.pop_back();
        back(i+1,temp,nums,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        vector<int> temp;
        back(0,temp,nums,s);
    
        vector<vector<int>>v;
        for (auto i:s){
            v.push_back(i);
        }
        return v;
    }
};