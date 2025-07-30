class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(),1);
        int pre=1;
        for(int i=0;i<nums.size();i++){
            v[i]=pre;
            pre*=nums[i];
        }//v=[1,1,2,6]
        int suf=1;
        for(int i=nums.size()-1;i>=0;i--){
            v[i]=suf*v[i];
            suf*=nums[i];
        }//v=[24,12,8,6]
        return v;
    }
};