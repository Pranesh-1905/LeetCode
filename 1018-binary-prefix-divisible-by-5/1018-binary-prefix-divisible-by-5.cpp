class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int x=0;
        for (auto i: nums){
            x=((x*2)+i)%5;      //(new x=old x*2+cur bit) formula to convert bin to dec;
            ans.push_back(x==0); 
        }
        return ans;
    }
};