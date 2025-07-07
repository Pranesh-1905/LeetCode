class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;

        }
        int j=0;
        for(auto i:m){
            if(i.second>1){
                j= i.first;
            }
        }
        return j;
    }
};