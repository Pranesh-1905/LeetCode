class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> res;
        for (auto i:nums){
            int org=i;
            int a=-1;
            for (auto j=1;j<org;j++){
                if((j|(j+1))==org){
                    a=j;
                    break;
                }
            }
            res.push_back(a);
        }
        return res;
    }
};