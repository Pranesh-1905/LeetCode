class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for (auto i=0;i<nums.size();i++){
            int s=nums[i];
            
            while(i+1<nums.size()&& nums[i+1]==nums[i]+1){
                i++;
            }
            if(nums[i]!=s){
                ans.push_back(to_string(s)+"->"+to_string(nums[i]));
            }
            else{
                ans.push_back(to_string(s));
            }
        }
        return ans;
    }
};