class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>h;
        for(int i:nums){
            h[i]++;
        }
        int thre=(nums.size()/3);
        for(auto& [key,value]:h){
            if(value>thre){

                 v.push_back(key);
            }
        }
        return v;
    }
};